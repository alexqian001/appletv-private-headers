/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATV2StepVerificationOperation : XXUnknownSuperclass {
	NSString *_selectedDeviceLabel;	// 60 = 0x3c
	NSString *_submitButtonTitle;	// 64 = 0x40
	NSString *_sendNewCodeButtonTitle;	// 68 = 0x44
	id _requestNewCodeHandler;	// 72 = 0x48
}
@property(copy, nonatomic) id requestNewCodeHandler;	// G=0x4bb965; S=0x4bb979; @synthesize=_requestNewCodeHandler
@property(copy, nonatomic) NSString *selectedDeviceLabel;	// G=0x4bb8f9; S=0x4bb90d; @synthesize=_selectedDeviceLabel
@property(copy, nonatomic) NSString *sendNewCodeButtonTitle;	// G=0x4bb941; S=0x4bb955; @synthesize=_sendNewCodeButtonTitle
@property(copy, nonatomic) NSString *submitButtonTitle;	// G=0x4bb91d; S=0x4bb931; @synthesize=_submitButtonTitle
- (void).cxx_destruct;	// 0x4bb989
- (void)presentCodeEntryAlertWithTitle:(id)title message:(id)message newCodeLabel:(id)label submitLabel:(id)label4 newCodeRequestHandler:(id)handler completion:(id)completion;	// 0x4bb315
- (void)presentDevicesAlertWithTitle:(id)title message:(id)message deviceList:(id)list completion:(id)completion;	// 0x4bb015
- (void)presentFailureAlertWithTitle:(id)title message:(id)message completion:(id)completion;	// 0x4bb705
// declared property getter: - (id)requestNewCodeHandler;	// 0x4bb965
// declared property getter: - (id)selectedDeviceLabel;	// 0x4bb8f9
// declared property getter: - (id)sendNewCodeButtonTitle;	// 0x4bb941
// declared property setter: - (void)setRequestNewCodeHandler:(id)handler;	// 0x4bb979
// declared property setter: - (void)setSelectedDeviceLabel:(id)label;	// 0x4bb90d
// declared property setter: - (void)setSendNewCodeButtonTitle:(id)title;	// 0x4bb955
// declared property setter: - (void)setSubmitButtonTitle:(id)title;	// 0x4bb931
// declared property getter: - (id)submitButtonTitle;	// 0x4bb91d
- (void)textEntry:(id)entry didSelectButton:(int)button;	// 0x4bb8c9
- (BOOL)textEntry:(id)entry shouldDismissOnButton:(int)button;	// 0x4bb8bd
- (id)textEntry:(id)entry titleForButton:(int)button;	// 0x4bb859
@end
