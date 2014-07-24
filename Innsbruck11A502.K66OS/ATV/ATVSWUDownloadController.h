/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVSWUDownloadController : BRViewController {
	BOOL _applyStarted;	// 104 = 0x68
	NSString *_cancelTitle;	// 108 = 0x6c
	NSString *_cancelText;	// 112 = 0x70
	NSString *_cancelContinueLabel;	// 116 = 0x74
	NSString *_cancelCancelLabel;	// 120 = 0x78
}
@property(assign, nonatomic) BOOL applyStarted;	// G=0x378c01; S=0x378c11; @synthesize=_applyStarted
@property(retain, nonatomic) NSString *cancelCancelLabel;	// G=0x378bc9; S=0x378bd9; @synthesize=_cancelCancelLabel
@property(retain, nonatomic) NSString *cancelContinueLabel;	// G=0x378b91; S=0x378ba1; @synthesize=_cancelContinueLabel
@property(retain, nonatomic) NSString *cancelText;	// G=0x378b59; S=0x378b69; @synthesize=_cancelText
@property(retain, nonatomic) NSString *cancelTitle;	// G=0x378b21; S=0x378b31; @synthesize=_cancelTitle
- (id)init;	// 0x37899d
- (id)initWithCancelTitle:(id)cancelTitle text:(id)text continueLabel:(id)label cancelLabel:(id)label4;	// 0x3786c9
- (void).cxx_destruct;	// 0x378c21
- (void)_requestCancel;	// 0x3794b1
- (void)_updateApplyFailed:(id)failed;	// 0x379409
- (void)_updateApplyStarted:(id)started;	// 0x37939d
- (void)_updateCheckFinished:(id)finished;	// 0x378ce5
- (void)_updateCheckStarted:(id)started;	// 0x378c7d
- (void)_updateDownloadFinished:(id)finished;	// 0x378ec9
- (void)_updateDownloadStarted:(id)started;	// 0x378e61
- (void)_updateProgress:(id)progress;	// 0x37913d
// declared property getter: - (BOOL)applyStarted;	// 0x378c01
- (BOOL)brEventAction:(id)action;	// 0x378a15
// declared property getter: - (id)cancelCancelLabel;	// 0x378bc9
// declared property getter: - (id)cancelContinueLabel;	// 0x378b91
- (void)cancelOperation;	// 0x378b1d
// declared property getter: - (id)cancelText;	// 0x378b59
// declared property getter: - (id)cancelTitle;	// 0x378b21
- (void)dealloc;	// 0x3789a9
// declared property setter: - (void)setApplyStarted:(BOOL)started;	// 0x378c11
// declared property setter: - (void)setCancelCancelLabel:(id)label;	// 0x378bd9
// declared property setter: - (void)setCancelContinueLabel:(id)label;	// 0x378ba1
// declared property setter: - (void)setCancelText:(id)text;	// 0x378b69
// declared property setter: - (void)setCancelTitle:(id)title;	// 0x378b31
- (void)startOperation;	// 0x378b15
- (void)stopOperation;	// 0x378b19
- (void)wasPopped;	// 0x378ad5
- (void)wasPushed;	// 0x378a95
@end
