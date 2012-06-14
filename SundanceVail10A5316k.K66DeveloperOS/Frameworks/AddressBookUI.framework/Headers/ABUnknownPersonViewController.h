/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UIActionSheetDelegate.h"
#import "AddressBookUI-Structs.h"
#import <UIViewController.h> // Unknown library

@class ABPersonTableViewSharingDelegate, ABPersonTableViewDataSource, NSArray, ABPersonViewControllerHelper, UIView, ABPersonTableViewActionsDelegate, NSString;
@protocol ABStyleProvider, ABUnknownPersonViewControllerDelegate;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate> {
@private
	id _helper;	// 180 = 0xb4
	id<ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;	// 184 = 0xb8
	id _reserved;	// 188 = 0xbc
	ABPersonTableViewDataSource *_dataSource;	// 192 = 0xc0
	ABPersonTableViewActionsDelegate *_actionsDelegate;	// 196 = 0xc4
	ABPersonTableViewSharingDelegate *_sharingDelegate;	// 200 = 0xc8
}
@property(readonly, assign, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate;	// G=0x34ca52d9; @synthesize=_actionsDelegate
@property(assign, nonatomic) void *addressBook;	// G=0x34ca3069; S=0x34ca3089; 
@property(assign, nonatomic) BOOL allowsActions;	// G=0x34ca334d; S=0x34ca3321; 
@property(assign, nonatomic) BOOL allowsAddingToAddressBook;	// G=0x34ca33e9; S=0x34ca33c9; 
@property(assign, nonatomic) BOOL allowsConferencing;	// G=0x34ca348d; S=0x34ca3461; 
@property(assign, nonatomic) BOOL allowsSendingTextMessage;	// G=0x34ca3439; S=0x34ca340d; 
@property(assign, nonatomic) BOOL allowsSharing;	// G=0x34ca3375; S=0x34ca339d; 
@property(copy, nonatomic) NSString *alternateName;	// G=0x34ca3155; S=0x34ca3129; 
@property(copy, nonatomic) NSString *attribution;	// G=0x34ca36fd; S=0x34ca3725; 
@property(assign) BOOL badgeEmailPropertiesForMailVIP;	// G=0x34ca3c21; S=0x34ca3c49; converted property
@property(readonly, assign, nonatomic) BOOL canShareContact;	// G=0x34ca3821; 
@property(retain) id customFooterView;	// G=0x34ca3965; S=0x34ca3939; converted property
@property(retain) id customHeaderView;	// G=0x34ca3911; S=0x34ca38e5; converted property
@property(retain) id customMessageView;	// G=0x34ca32cd; S=0x34ca32f5; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x34ca52c9; @synthesize=_dataSource
@property(assign, nonatomic) void *displayedPerson;	// G=0x34ca30e9; S=0x34ca3109; 
@property(copy, nonatomic) NSArray *displayedProperties;	// G=0x34ca36bd; S=0x34ca36dd; 
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x34ca2f65; 
@property(assign, nonatomic) BOOL isLocation;	// G=0x34ca3849; S=0x34ca386d; 
@property(readonly, assign, nonatomic) BOOL isShowingMultipleVCards;	// G=0x34ca5299; 
@property(copy, nonatomic) NSString *message;	// G=0x34ca31a9; S=0x34ca317d; 
@property(retain) id messageDetail;	// G=0x34ca3251; S=0x34ca3225; converted property
@property(retain) id messageDetailFont;	// G=0x34ca3279; S=0x34ca32a1; converted property
@property(retain) id messageFont;	// G=0x34ca31fd; S=0x34ca31d1; converted property
@property(retain, nonatomic) UIView *personHeaderView;	// G=0x34ca35fd; S=0x34ca35d1; 
@property(assign, nonatomic) BOOL savesNewContactOnSuspend;	// G=0x34ca39ad; S=0x34ca398d; 
@property(retain) id shareLocationSnapshotImage;	// G=0x34ca3b25; S=0x34ca3b4d; converted property
@property(retain) id shareLocationURL;	// G=0x34ca3ad1; S=0x34ca3af9; converted property
@property(retain) id shareMessageBody;	// G=0x34ca3a29; S=0x34ca3a51; converted property
@property(assign) BOOL shareMessageBodyIsHTML;	// G=0x34ca39d5; S=0x34ca39fd; converted property
@property(retain) id shareMessageSubject;	// G=0x34ca3a7d; S=0x34ca3aa5; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate;	// G=0x34ca52e9; @synthesize=_sharingDelegate
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;	// G=0x34ca3651; S=0x34ca3625; 
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34ca30a9; S=0x34ca30c9; 
@property(assign, nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;	// G=0x34ca52f9; S=0x34ca5309; @synthesize=_unknownPersonViewDelegate
@property(retain) id willTweetLocationCallback;	// G=0x34ca3b79; S=0x34ca3ba1; converted property
@property(retain) id willWeiboLocationCallback;	// G=0x34ca3bcd; S=0x34ca3bf5; converted property
+ (id)defaultLabelsForProperty:(int)property person:(void *)person addressBook:(void *)book;	// 0x34ca34d5
- (id)init;	// 0x34ca29b1
- (id)initWithNibName:(id)nibName bundle:(id)bundle style:(int)style;	// 0x34ca29e5
- (id)initWithStyle:(int)style;	// 0x34ca29c5
- (id)initWithVCardData:(id)vcardData;	// 0x34ca2ccd
- (void)_addToExistingContacts;	// 0x34ca49f5
- (void)_addUnmergedRecords;	// 0x34ca42e1
- (id)_alertSheet;	// 0x34ca2e2d
- (BOOL)_allowsAutorotation;	// 0x34ca3d5d
- (void)_createNewContacts;	// 0x34ca425d
- (id)_findMatchingCardsForRecord:(void *)record;	// 0x34ca45ed
- (id)_forwarder;	// 0x34ca2ecd
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x34ca3e25
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x34ca3da1
- (void)_showCardViewerForIndex:(int)index;	// 0x34ca5045
- (void)_showUnmergedContactsAlert;	// 0x34ca438d
- (id)_unmergedAlertSheet;	// 0x34ca2e55
- (id)_unmergedRecords;	// 0x34ca2e7d
- (void)_unselectTable;	// 0x34ca5001
- (id)_vCardProperties;	// 0x34ca2e05
- (id)_vCardTable;	// 0x34ca2ea5
- (id)_vCards;	// 0x34ca2ddd
- (id)_viewControllerForCardAtIndex:(int)index;	// 0x34ca4ca5
- (int)abViewControllerType;	// 0x34ca39d1
- (float)ab_heightToFitForViewInPopoverView;	// 0x34ca3c75
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x34ca4bd5
// declared property getter: - (id)actionsDelegate;	// 0x34ca52d9
- (void)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34cb4c3d
- (void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34cb4b3d
- (void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34cb4b6d
// declared property getter: - (void *)addressBook;	// 0x34ca3069
// declared property getter: - (BOOL)allowsActions;	// 0x34ca334d
// declared property getter: - (BOOL)allowsAddingToAddressBook;	// 0x34ca33e9
// declared property getter: - (BOOL)allowsConferencing;	// 0x34ca348d
// declared property getter: - (BOOL)allowsSendingTextMessage;	// 0x34ca3439
// declared property getter: - (BOOL)allowsSharing;	// 0x34ca3375
// declared property getter: - (id)alternateName;	// 0x34ca3155
- (void)applicationDidResume;	// 0x34ca416d
// declared property getter: - (id)attribution;	// 0x34ca36fd
// converted property getter: - (BOOL)badgeEmailPropertiesForMailVIP;	// 0x34ca3c21
// declared property getter: - (BOOL)canShareContact;	// 0x34ca3821
// converted property getter: - (id)customFooterView;	// 0x34ca3965
// converted property getter: - (id)customHeaderView;	// 0x34ca3911
// converted property getter: - (id)customMessageView;	// 0x34ca32cd
// declared property getter: - (id)dataSource;	// 0x34ca52c9
- (void)dealloc;	// 0x34ca2c29
- (void)dismissAnimated:(BOOL)animated;	// 0x34ca4999
// declared property getter: - (void *)displayedPerson;	// 0x34ca30e9
// declared property getter: - (id)displayedProperties;	// 0x34ca36bd
- (BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x34cb4af5
// declared property getter: - (id)helper;	// 0x34ca2f65
// declared property getter: - (BOOL)isLocation;	// 0x34ca3849
// declared property getter: - (BOOL)isShowingMultipleVCards;	// 0x34ca5299
- (void)loadView;	// 0x34ca3e31
// declared property getter: - (id)message;	// 0x34ca31a9
// converted property getter: - (id)messageDetail;	// 0x34ca3251
// converted property getter: - (id)messageDetailFont;	// 0x34ca3279
// converted property getter: - (id)messageFont;	// 0x34ca31fd
- (id)newActionButton;	// 0x34cb4c15
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34ca4d4d
// declared property getter: - (id)personHeaderView;	// 0x34ca35fd
- (BOOL)personViewControllerHelper:(id)helper shouldContinueAfterSelectingPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;	// 0x34ca41b1
- (void)presentAddToContactsSheet;	// 0x34ca37c9
- (void)presentNewContactViewControllerForAddToContacts;	// 0x34ca388d
- (void)presentPeoplePickerNavigationControllerForMergeToContact;	// 0x34ca38b9
- (void)presentShareContactSheet;	// 0x34ca37f5
- (void)reloadImageData;	// 0x34ca37a1
- (void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34cb4bb9
// declared property getter: - (BOOL)savesNewContactOnSuspend;	// 0x34ca39ad
- (void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;	// 0x34cb4be9
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x34ca3089
// declared property setter: - (void)setAllowsActions:(BOOL)actions;	// 0x34ca3321
// declared property setter: - (void)setAllowsAddingToAddressBook:(BOOL)addressBook;	// 0x34ca33c9
// declared property setter: - (void)setAllowsConferencing:(BOOL)conferencing;	// 0x34ca3461
// declared property setter: - (void)setAllowsSendingTextMessage:(BOOL)message;	// 0x34ca340d
// declared property setter: - (void)setAllowsSharing:(BOOL)sharing;	// 0x34ca339d
// declared property setter: - (void)setAlternateName:(id)name;	// 0x34ca3129
// declared property setter: - (void)setAttribution:(id)attribution;	// 0x34ca3725
- (void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;	// 0x34ca3769
// converted property setter: - (void)setBadgeEmailPropertiesForMailVIP:(BOOL)mailVIP;	// 0x34ca3c49
- (void)setCardContentProvider:(id)provider;	// 0x34ca34b5
- (void)setCustomAppearanceProvider:(id)provider;	// 0x34cc54d9
// converted property setter: - (void)setCustomFooterView:(id)view;	// 0x34ca3939
// converted property setter: - (void)setCustomHeaderView:(id)view;	// 0x34ca38e5
// converted property setter: - (void)setCustomMessageView:(id)view;	// 0x34ca32f5
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x34ca3109
// declared property setter: - (void)setDisplayedProperties:(id)properties;	// 0x34ca36dd
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;	// 0x34ca358d
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;	// 0x34ca354d
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person important:(BOOL)important;	// 0x34ca3511
// declared property setter: - (void)setIsLocation:(BOOL)location;	// 0x34ca386d
// declared property setter: - (void)setMessage:(id)message;	// 0x34ca317d
// converted property setter: - (void)setMessageDetail:(id)detail;	// 0x34ca3225
// converted property setter: - (void)setMessageDetailFont:(id)font;	// 0x34ca32a1
// converted property setter: - (void)setMessageFont:(id)font;	// 0x34ca31d1
// declared property setter: - (void)setPersonHeaderView:(id)view;	// 0x34ca35d1
- (void)setPrimaryProperty:(int)property;	// 0x34ca36a9
- (void)setPrimaryProperty:(int)property countryCode:(id)code;	// 0x34ca3679
// declared property setter: - (void)setSavesNewContactOnSuspend:(BOOL)suspend;	// 0x34ca398d
// converted property setter: - (void)setShareLocationSnapshotImage:(id)image;	// 0x34ca3b4d
// converted property setter: - (void)setShareLocationURL:(id)url;	// 0x34ca3af9
// converted property setter: - (void)setShareMessageBody:(id)body;	// 0x34ca3a51
// converted property setter: - (void)setShareMessageBodyIsHTML:(BOOL)html;	// 0x34ca39fd
// converted property setter: - (void)setShareMessageSubject:(id)subject;	// 0x34ca3aa5
// declared property setter: - (void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;	// 0x34ca3625
- (void)setStringValue:(id)value forProperty:(int)property;	// 0x34ca35b1
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34ca30c9
// declared property setter: - (void)setUnknownPersonViewDelegate:(id)delegate;	// 0x34ca5309
// converted property setter: - (void)setWillTweetLocationCallback:(id)tweetLocationCallback;	// 0x34ca3ba1
// converted property setter: - (void)setWillWeiboLocationCallback:(id)weiboLocationCallback;	// 0x34ca3bf5
// converted property getter: - (id)shareLocationSnapshotImage;	// 0x34ca3b25
// converted property getter: - (id)shareLocationURL;	// 0x34ca3ad1
// converted property getter: - (id)shareMessageBody;	// 0x34ca3a29
// converted property getter: - (BOOL)shareMessageBodyIsHTML;	// 0x34ca39d5
// converted property getter: - (id)shareMessageSubject;	// 0x34ca3a7d
// declared property getter: - (id)sharingDelegate;	// 0x34ca52e9
// declared property getter: - (BOOL)shouldAlignPersonHeaderViewToImage;	// 0x34ca3651
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x34ca3ded
// declared property getter: - (id)styleProvider;	// 0x34ca30a9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34ca4d81
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34ca50c9
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34ca4d51
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x34ca5089
- (void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34ca3035
- (void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector target:(id)target localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34ca2f75
// declared property getter: - (id)unknownPersonViewDelegate;	// 0x34ca52f9
- (void)updateNavigationButtons;	// 0x34ca3e2d
- (void)viewDidAppear:(BOOL)view;	// 0x34ca40f9
- (void)viewDidLoad;	// 0x34ca3d19
- (void)viewDidUnload;	// 0x34ca4069
- (void)viewWillAppear:(BOOL)view;	// 0x34ca4089
- (void)viewWillDisappear:(BOOL)view;	// 0x34ca4125
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x34ca3df1
// converted property getter: - (id)willTweetLocationCallback;	// 0x34ca3b79
// converted property getter: - (id)willWeiboLocationCallback;	// 0x34ca3bcd
@end
