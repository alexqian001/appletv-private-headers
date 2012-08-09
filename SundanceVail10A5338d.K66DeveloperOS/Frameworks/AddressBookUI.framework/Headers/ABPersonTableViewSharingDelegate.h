/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class UIViewController, UIImage, ABStyleProvider, ABPersonViewControllerHelper, NSString, ABActionSheetDelegate;

@interface ABPersonTableViewSharingDelegate : NSObject {
	UIViewController *_savedPopoverContentViewController;	// 4 = 0x4
	ABActionSheetDelegate *_actionSheetDelegate;	// 8 = 0x8
	ABStyleProvider *_styleProvider;	// 12 = 0xc
	ABPersonViewControllerHelper *_helper;	// 16 = 0x10
	BOOL _shareMessageBodyIsHTML;	// 20 = 0x14
	NSString *_shareMessageBody;	// 24 = 0x18
	NSString *_shareMessageSubject;	// 28 = 0x1c
	NSString *_shareLocationURL;	// 32 = 0x20
	UIImage *_shareLocationSnapshotImage;	// 36 = 0x24
	id _willTweetLocationCallback;	// 40 = 0x28
	id _willWeiboLocationCallback;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) BOOL canSendMMS;	// G=0x370da38d; 
@property(readonly, assign, nonatomic) BOOL canSendMail;	// G=0x370da3e9; 
@property(readonly, assign, nonatomic) BOOL canShareContact;	// G=0x370dac51; 
@property(readonly, assign, nonatomic) BOOL canTweet;	// G=0x370da41d; 
@property(readonly, assign, nonatomic) BOOL canWeibo;	// G=0x370da48d; 
@property(assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x370dad7d; S=0x370dad8d; @synthesize=_helper
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage;	// G=0x370dae29; S=0x370dae39; @synthesize=_shareLocationSnapshotImage
@property(copy, nonatomic) NSString *shareLocationURL;	// G=0x370dae05; S=0x370dae19; @synthesize=_shareLocationURL
@property(copy, nonatomic) NSString *shareMessageBody;	// G=0x370dadbd; S=0x370dadd1; @synthesize=_shareMessageBody
@property(assign, nonatomic) BOOL shareMessageBodyIsHTML;	// G=0x370dad9d; S=0x370dadad; @synthesize=_shareMessageBodyIsHTML
@property(copy, nonatomic) NSString *shareMessageSubject;	// G=0x370dade1; S=0x370dadf5; @synthesize=_shareMessageSubject
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x370dad5d; S=0x370dad6d; @synthesize=_styleProvider
@property(copy, nonatomic) id willTweetLocationCallback;	// G=0x370dae49; S=0x370dae5d; @synthesize=_willTweetLocationCallback
@property(copy, nonatomic) id willWeiboLocationCallback;	// G=0x370dae6d; S=0x370dae81; @synthesize=_willWeiboLocationCallback
+ (void *)_newFakePersonForMergedPeople:(id)mergedPeople;	// 0x370d9479
- (id)init;	// 0x370d92a5
- (void)_presentShareContactByEmailViewController:(id)controller;	// 0x370d97f1
// declared property getter: - (BOOL)canSendMMS;	// 0x370da38d
// declared property getter: - (BOOL)canSendMail;	// 0x370da3e9
// declared property getter: - (BOOL)canShareContact;	// 0x370dac51
// declared property getter: - (BOOL)canTweet;	// 0x370da41d
// declared property getter: - (BOOL)canWeibo;	// 0x370da48d
- (void)dealloc;	// 0x370d932d
- (void)didDismissModalViewController;	// 0x370dad31
- (void)getVCardData:(id *)data exportMode:(int)mode fileName:(id *)name;	// 0x370d953d
// declared property getter: - (id)helper;	// 0x370dad7d
- (BOOL)loadChatKitAndReturnBundle:(id *)bundle;	// 0x370d93f9
- (BOOL)loadMessageUIAndReturnBundle:(id *)bundle;	// 0x370d9439
- (void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;	// 0x370d9aa1
// declared property setter: - (void)setHelper:(id)helper;	// 0x370dad8d
// declared property setter: - (void)setShareLocationSnapshotImage:(id)image;	// 0x370dae39
// declared property setter: - (void)setShareLocationURL:(id)url;	// 0x370dae19
// declared property setter: - (void)setShareMessageBody:(id)body;	// 0x370dadd1
// declared property setter: - (void)setShareMessageBodyIsHTML:(BOOL)html;	// 0x370dadad
// declared property setter: - (void)setShareMessageSubject:(id)subject;	// 0x370dadf5
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x370dad6d
// declared property setter: - (void)setWillTweetLocationCallback:(id)tweetLocationCallback;	// 0x370dae5d
// declared property setter: - (void)setWillWeiboLocationCallback:(id)weiboLocationCallback;	// 0x370dae81
- (void)shareActionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x370da2d5
- (void)shareContact:(id)contact;	// 0x370dac3d
- (void)shareContactByEmail:(id)email;	// 0x370d9871
- (void)shareContactByTextMessage:(id)message;	// 0x370d9b79
- (void)shareContactFromButtonItem:(id)buttonItem;	// 0x370dac29
- (void)shareContactFromButtonItem:(id)buttonItem sender:(id)sender;	// 0x370da4fd
- (void)shareLocationOnTwitter:(id)twitter;	// 0x370d9ea5
- (void)shareLocationOnWeibo:(id)weibo;	// 0x370da0bd
// declared property getter: - (id)shareLocationSnapshotImage;	// 0x370dae29
// declared property getter: - (id)shareLocationURL;	// 0x370dae05
// declared property getter: - (id)shareMessageBody;	// 0x370dadbd
// declared property getter: - (BOOL)shareMessageBodyIsHTML;	// 0x370dad9d
// declared property getter: - (id)shareMessageSubject;	// 0x370dade1
- (void)smsComposeControllerCancelled:(id)cancelled;	// 0x370d9e2d
- (void)smsComposeControllerDataInserted:(id)inserted;	// 0x370d9d61
- (void)smsComposeControllerSendStarted:(id)started;	// 0x370d9e69
// declared property getter: - (id)styleProvider;	// 0x370dad5d
- (id)vCardFileName;	// 0x370d9751
// declared property getter: - (id)willTweetLocationCallback;	// 0x370dae49
// declared property getter: - (id)willWeiboLocationCallback;	// 0x370dae6d
@end
