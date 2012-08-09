/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateView_iPhone.h"
#import "UIKit-Structs.h"
#import "UIKeyboardCandidateViewInline.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {
	CGRect _collapsedRect;	// 184 = 0xb8
}
- (id)initWithFrame:(CGRect)frame;	// 0x3104fea1
- (void)_collapse:(id)collapse;	// 0x310504a9
- (id)activeCandidateList;	// 0x31050479
- (void)candidatesDidChange;	// 0x31050489
- (void)setCandidateBarExtended:(BOOL)extended fromRect:(CGRect)rect;	// 0x31050141
@end
