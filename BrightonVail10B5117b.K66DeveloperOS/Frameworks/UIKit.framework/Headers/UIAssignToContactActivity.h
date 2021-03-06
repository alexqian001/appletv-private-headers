/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "UIActivity.h"
#import "UINavigationControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"

@class UIImage, ABPeoplePickerNavigationController, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
	UIImage *_image;	// 8 = 0x8
	void *_person;	// 12 = 0xc
	UIImagePickerController *_imagePickerController;	// 16 = 0x10
	ABPeoplePickerNavigationController *_peoplePicker;	// 20 = 0x14
}
@property(retain, nonatomic) UIImage *image;	// G=0x330ef5ed; S=0x330ef5fd; @synthesize=_image
@property(retain, nonatomic) UIImagePickerController *imagePickerController;	// G=0x330ef62d; S=0x330ef63d; @synthesize=_imagePickerController
@property(retain, nonatomic) ABPeoplePickerNavigationController *peoplePicker;	// G=0x330ef64d; S=0x330ef65d; @synthesize=_peoplePicker
@property(assign, nonatomic) void *person;	// G=0x330ef60d; S=0x330ef61d; @synthesize=_person
- (id)_activityImage;	// 0x330eee1d
- (void)_cleanup;	// 0x330ef11d
- (id)_embeddedActivityViewController;	// 0x330ef029
- (id)activityTitle;	// 0x330eee91
- (id)activityType;	// 0x32e1dcdd
- (id)activityViewController;	// 0x330ef0a5
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x330eeead
- (void)dealloc;	// 0x330eed91
// declared property getter: - (id)image;	// 0x330ef5ed
// declared property getter: - (id)imagePickerController;	// 0x330ef62d
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;	// 0x330ef3b1
- (void)imagePickerControllerDidCancel:(id)imagePickerController;	// 0x330ef5d9
// declared property getter: - (id)peoplePicker;	// 0x330ef64d
- (BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void *)person;	// 0x330ef1d1
- (BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x330ef3ad
- (void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;	// 0x330ef1bd
// declared property getter: - (void *)person;	// 0x330ef60d
- (void)prepareWithActivityItems:(id)activityItems;	// 0x330eeed1
// declared property setter: - (void)setImage:(id)image;	// 0x330ef5fd
// declared property setter: - (void)setImagePickerController:(id)controller;	// 0x330ef63d
// declared property setter: - (void)setPeoplePicker:(id)picker;	// 0x330ef65d
// declared property setter: - (void)setPerson:(void *)person;	// 0x330ef61d
@end

