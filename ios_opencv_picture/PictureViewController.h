//
//  PictureViewController.h
//  ios_opencv_picture
//
//  Created by Sinosoft on 8/6/13.
//  Copyright (c) 2013 com.Sinosoft. All rights reserved.
//

#import <UIKit/UIKit.h>
 
@interface PictureViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@property(strong,nonatomic) IBOutlet UIImageView* imageView;//样本图片

@property(strong,nonatomic) IBOutlet UIImageView* imageView_2;//比较图片
 

-(IBAction)chooseFromPhotos:(id)sender;

-(IBAction)takePhoto:(id)sender;

@end
