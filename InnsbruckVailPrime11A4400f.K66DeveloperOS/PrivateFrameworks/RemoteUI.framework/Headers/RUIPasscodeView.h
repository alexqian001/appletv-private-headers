/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import "PSPasscodeFieldDelegate.h"
#import "RUIElement.h"

@class RUIObjectModel, PSPasscodeField, UIView, UILabel;

@interface RUIPasscodeView : RUIElement <PSPasscodeFieldDelegate> {
	UIView *_view;	// 8 = 0x8
	UILabel *_label;	// 12 = 0xc
	UIView *_footer;	// 16 = 0x10
	RUIObjectModel *_objectModel;	// 20 = 0x14
	PSPasscodeField *_passcodeField;	// 24 = 0x18
}
@property(assign, nonatomic) RUIObjectModel *objectModel;	// G=0x326883ed; S=0x326883fd; @synthesize=_objectModel
@property(readonly, assign, nonatomic) PSPasscodeField *passcodeField;	// G=0x3268840d; @synthesize=_passcodeField
- (void)dealloc;	// 0x32688361
// declared property getter: - (id)objectModel;	// 0x326883ed
// declared property getter: - (id)passcodeField;	// 0x3268840d
- (void)passcodeField:(id)field enteredPasscode:(id)passcode;	// 0x32688245
- (id)pinView;	// 0x32687791
- (void)populatePostbackDictionary:(id)dictionary;	// 0x32687865
- (void)remoteUILinkFooterActivatedLink:(id)link;	// 0x326881d1
// declared property setter: - (void)setObjectModel:(id)model;	// 0x326883fd
- (void)submitPIN;	// 0x326882ed
- (void)viewDidLayout;	// 0x32687931
- (void)viewWillAppear:(BOOL)view;	// 0x326878f1
- (void)viewWillDisappear:(BOOL)view;	// 0x32687911
@end

