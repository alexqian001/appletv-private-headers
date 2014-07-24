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
@property(assign, nonatomic) BOOL applyStarted;	// G=0x37d1c9; S=0x37d1d9; @synthesize=_applyStarted
@property(retain, nonatomic) NSString *cancelCancelLabel;	// G=0x37d191; S=0x37d1a1; @synthesize=_cancelCancelLabel
@property(retain, nonatomic) NSString *cancelContinueLabel;	// G=0x37d159; S=0x37d169; @synthesize=_cancelContinueLabel
@property(retain, nonatomic) NSString *cancelText;	// G=0x37d121; S=0x37d131; @synthesize=_cancelText
@property(retain, nonatomic) NSString *cancelTitle;	// G=0x37d0e9; S=0x37d0f9; @synthesize=_cancelTitle
- (id)init;	// 0x37cf65
- (id)initWithCancelTitle:(id)cancelTitle text:(id)text continueLabel:(id)label cancelLabel:(id)label4;	// 0x37cc91
- (void).cxx_destruct;	// 0x37d1e9
- (void)_requestCancel;	// 0x37da79
- (void)_updateApplyFailed:(id)failed;	// 0x37d9d1
- (void)_updateApplyStarted:(id)started;	// 0x37d965
- (void)_updateCheckFinished:(id)finished;	// 0x37d2ad
- (void)_updateCheckStarted:(id)started;	// 0x37d245
- (void)_updateDownloadFinished:(id)finished;	// 0x37d491
- (void)_updateDownloadStarted:(id)started;	// 0x37d429
- (void)_updateProgress:(id)progress;	// 0x37d705
// declared property getter: - (BOOL)applyStarted;	// 0x37d1c9
- (BOOL)brEventAction:(id)action;	// 0x37cfdd
// declared property getter: - (id)cancelCancelLabel;	// 0x37d191
// declared property getter: - (id)cancelContinueLabel;	// 0x37d159
- (void)cancelOperation;	// 0x37d0e5
// declared property getter: - (id)cancelText;	// 0x37d121
// declared property getter: - (id)cancelTitle;	// 0x37d0e9
- (void)dealloc;	// 0x37cf71
// declared property setter: - (void)setApplyStarted:(BOOL)started;	// 0x37d1d9
// declared property setter: - (void)setCancelCancelLabel:(id)label;	// 0x37d1a1
// declared property setter: - (void)setCancelContinueLabel:(id)label;	// 0x37d169
// declared property setter: - (void)setCancelText:(id)text;	// 0x37d131
// declared property setter: - (void)setCancelTitle:(id)title;	// 0x37d0f9
- (void)startOperation;	// 0x37d0dd
- (void)stopOperation;	// 0x37d0e1
- (void)wasPopped;	// 0x37d09d
- (void)wasPushed;	// 0x37d05d
@end
