/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAlertView.h"

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface UIUndoAlertView : UIAlertView {
@private
	int _undoButtonIndex;	// 148 = 0x94
	int _redoButtonIndex;	// 152 = 0x98
	NSUndoManager *_undoManager;	// 156 = 0x9c
}
@property(readonly, assign, nonatomic) int redoButtonIndex;	// G=0x301cdaed; @synthesize=_redoButtonIndex
@property(readonly, assign, nonatomic) int undoButtonIndex;	// G=0x301cdafd; @synthesize=_undoButtonIndex
@property(readonly, assign, nonatomic) NSUndoManager *undoManager;	// G=0x301cdadd; @synthesize=_undoManager
- (id)initWithDelegate:(id)delegate undoManager:(id)manager;	// 0x301cf52d
- (void)dealloc;	// 0x301cf4b9
// declared property getter: - (int)redoButtonIndex;	// 0x301cdaed
- (void)show;	// 0x301cf501
// declared property getter: - (int)undoButtonIndex;	// 0x301cdafd
// declared property getter: - (id)undoManager;	// 0x301cdadd
@end

