# -*- coding: utf-8 -*-
"""25June_Regression_HiddenLayer1.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1HSOIyLFu_Mzbw1rsY8zfBQqKVsOtliNW
"""

import pandas as pd
import tensorflow as tf
from sklearn.metrics import r2_score

df=pd.read_csv('sample_data/california_housing_train.csv')
X=df.iloc[:,:-1].values
y=df.iloc[:,-1].values

def output_neuron(X,w,b):
  return tf.matmul(X,w)+b

def loss(y_true,y_pred):
  return tf.losses.mean_squared_error(y_true,y_pred)

def activation(ynet):
  return tf.nn.sigmoid(ynet)

w=tf.Variable(tf.ones(shape=[8,1],dtype=tf.double))
b=tf.Variable(tf.ones(shape=[1,1],dtype=tf.double))
X=df.iloc[:,:-1].values
y=df.iloc[:,-1].values
from sklearn.preprocessing import StandardScaler
sc=StandardScaler()
X_new=sc.fit_transform(X)
for epoch in range(300):
  with tf.GradientTape() as tape:
    yhat=output_neuron(X_new,w,b)
    yhat=tf.reshape(yhat,[-1])#flatten the tensor yhat
    ls=loss(y,yhat)
    if(epoch%100==0):
      print("Loss:",ls,"\t","Score:",r2_score(y,yhat.numpy()))
    dw,db=tape.gradient(ls,[w,b])
    w.assign_sub(.1*dw)
    b.assign_sub(.1*db)

w=tf.Variable(tf.zeros(shape=[8,1],dtype=tf.double))
b=tf.Variable(tf.zeros(shape=[1,1],dtype=tf.double))
X=df.iloc[:,:-1].values
y=df.iloc[:,-1].values
from sklearn.preprocessing import StandardScaler
sc=StandardScaler()
X_new=sc.fit_transform(X)
for epoch in range(300):
  with tf.GradientTape() as tape:
    yhat=output_neuron(X_new,w,b)
    yhat=tf.reshape(yhat,[-1])#flatten the tensor yhat
    ls=loss(y,yhat)
    if(epoch%100==0):
      print("Loss:",ls,"\t","Score:",r2_score(y,yhat.numpy()))
    dw,db=tape.gradient(ls,[w,b])
    w.assign_sub(.1*dw)
    b.assign_sub(.1*db)

w=tf.Variable(tf.random.truncated_normal(shape=[8,1],dtype=tf.double))
b=tf.Variable(tf.random.truncated_normal(shape=[1,1],dtype=tf.double))
X=df.iloc[:,:-1].values
y=df.iloc[:,-1].values
from sklearn.preprocessing import StandardScaler
sc=StandardScaler()
X_new=sc.fit_transform(X)
for epoch in range(300):
  with tf.GradientTape() as tape:
    yhat=output_neuron(X_new,w,b)
    yhat=tf.reshape(yhat,[-1])#flatten the tensor yhat
    ls=loss(y,yhat)
    if(epoch%100==0):
      print("Loss:",ls,"\t","Score:",r2_score(y,yhat.numpy()))
    dw,db=tape.gradient(ls,[w,b])
    w.assign_sub(.1*dw)
    b.assign_sub(.1*db)

w=tf.Variable(tf.random.truncated_normal(shape=[8,1],dtype=tf.double))
b=tf.Variable(tf.random.truncated_normal(shape=[1,1],dtype=tf.double))
X=df.iloc[:,:-1].values
y=df.iloc[:,-1].values
from sklearn.preprocessing import StandardScaler
sc=StandardScaler()
X_new=sc.fit_transform(X)
optimizer=tf.optimizers.SGD(learning_rate=.1)
for epoch in range(300):
  with tf.GradientTape() as tape:
    yhat=output_neuron(X_new,w,b)
    yhat=tf.reshape(yhat,[-1])#flatten the tensor yhat
    ls=loss(y,yhat)
    if(epoch%100==0):
      print("Loss:",ls,"\t","Score:",r2_score(y,yhat.numpy()))
    dw,db=tape.gradient(ls,[w,b])
    optimizer.apply_gradients(zip([dw,db],[w,b]))

tf.random.set_seed(10)

wh=tf.Variable(tf.random.truncated_normal(shape=[8,25],dtype=tf.double))
bh=tf.Variable(tf.random.truncated_normal(shape=[1,25],dtype=tf.double))

wo=tf.Variable(tf.random.truncated_normal(shape=[25,1],dtype=tf.double))
bo=tf.Variable(tf.random.truncated_normal(shape=[1,1],dtype=tf.double))

df=pd.read_csv('sample_data/california_housing_train.csv')
X=df.iloc[:,:-1].values
y=df.iloc[:,-1].values
from sklearn.preprocessing import StandardScaler
sc=StandardScaler()
X_new=sc.fit_transform(X)
for epoch in range(2000):
  with tf.GradientTape() as tape:
    ynet=output_neuron(X_new,wh,bh)
    logit=activation(ynet)

    yhat=output_neuron(logit,wo,bo)
    yhat=tf.reshape(yhat,[-1])#flatten the tensor yhat
    ls=loss(y,yhat)
    if(epoch%100==0):
      print("Loss:",ls,"\t","Score:",r2_score(y,yhat.numpy()))
    dwh,dbh,dwo,dbo=tape.gradient(ls,[wh,bh,wo,bo])
    wh.assign_sub(.1*dwh)
    bh.assign_sub(.1*dbh)
    wo.assign_sub(.1*dwo)
    bo.assign_sub(.1*dbo)

tf.random.set_seed(10)

wh=tf.Variable(tf.random.truncated_normal(shape=[8,25],dtype=tf.double))
bh=tf.Variable(tf.random.truncated_normal(shape=[1,25],dtype=tf.double))

wo=tf.Variable(tf.random.truncated_normal(shape=[25,1],dtype=tf.double))
bo=tf.Variable(tf.random.truncated_normal(shape=[1,1],dtype=tf.double))

df=pd.read_csv('sample_data/california_housing_train.csv')
X=df.iloc[:,:-1].values
y=df.iloc[:,-1].values
from sklearn.preprocessing import StandardScaler
sc=StandardScaler()
X_new=sc.fit_transform(X)
optimizer=tf.optimizers.SGD(learning_rate=.1)
for epoch in range(2000):
  with tf.GradientTape() as tape:
    ynet=output_neuron(X_new,wh,bh)
    logit=activation(ynet)

    yhat=output_neuron(logit,wo,bo)
    yhat=tf.reshape(yhat,[-1])#flatten the tensor yhat
    ls=loss(y,yhat)
    if(epoch%100==0):
      print("Loss:",ls,"\t","Score:",r2_score(y,yhat.numpy()))
    dwh,dbh,dwo,dbo=tape.gradient(ls,[wh,bh,wo,bo])
    optimizer.apply_gradients(zip([dwh,dbh,dwo,dbo],[wh,bh,wo,bo]))

