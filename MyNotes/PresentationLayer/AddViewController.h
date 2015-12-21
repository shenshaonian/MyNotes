//
//  AddViewController.h
//  MyNotes
//
//  Created by dengwei on 15/11/30.
//  Copyright (c) 2015年 dengwei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoteBL.h"
#import "Note.h"
#import "NoteDAO.h"

@interface AddViewController : UIViewController <UITextViewDelegate>

@property (nonatomic, weak) UITextView *txtView;

-(void)clickDone;
-(void)clickSave:(UIButton *)sender;

@end
