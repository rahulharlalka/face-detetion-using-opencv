# mega-project - face recognition system using opencv 
1.	First create a folder to contain all the files for the required project.
2.	You need to have opencv installed in your system for the project to run.
3.	First of all go and copy the cascade folder present in the .opencv folder created after downloading the opencv library and paste it in your project folder under the title of directory cascades.
4.	Then make a folder in your project folder naming mytraindata . this folder will create all the train images of your project training material.
5.	Now open your jupyter notebook or any other python ide you are using an run the my_pics.ipynb python file. After running this filw you would see that a lot of images have been create and save under your project folder.drag all the images and put them under mytraindata folder under a folder of your name. if you want you can also put more training data pics under this folder within exact folder titles for training.
6.	Now moving on to the training part of the face recognizer.
    6.1.	First of all you need the following python libraries installed in your systems.
      6.1.1.	Numpy
      6.1.2.	Pandas
      6.1.3.	PIL
      6.1.4.	Opencv
      6.1.5.	Os
      6.1.6.	pickle
    6.2.	Upload the train_faces.ipynb model in your python ide and run the file.
    6.3.	After running the file you will notice that two new files have been created in project folder. This will be labelssave.pickle and trainer.yml
      6.3.1.	Labelssave.pickle is the file that has stored all the labels of the heading of the images as python dictionaries . this will be used later in the model to give output of face recognizer prediction.
      6.3.2.	Trainner.yml is the yaml type file which stores the trained model . it contains the model parameters which have be initialized after training.
    6.4.	The training of the model is over.
7.	Load the model.ipynb file in your IDE and run it . You will the output come up in form of text on your face and also as labels in output in your IDE.
8.   If you wnat to add more datasets pictures to the training model upload the new_data_addition.ipynb file in IDE and run it. The default internal camera will automatically start and would capture your images. this will the new datset fo training model.

the website and sql dataset of the model is on its way to be included in the model infrastructure.


the opencv face recognition model is not a full proof model because the number of users in the model increases the output y labels in the model icreases which then starts overlapping outputs and starts giving wrong results.
the camera quality of the laptop is also very low so training is done upon upon better quality images which testing and deployment of the model is done on poor quality videos this is a major hindrance to this model.
for goog recognition of the model we need to train the model on large amount of images of a specific person which is almost impossible as we do not have a large aomunt of images of a specific person.

# These are the major problems encountered while testing the model so the better altenative to this model is using one shotlearning siamese networks which uses only a few pics os a sprecific person for training and gives better output.
# This change in the model will be committed shortly.
