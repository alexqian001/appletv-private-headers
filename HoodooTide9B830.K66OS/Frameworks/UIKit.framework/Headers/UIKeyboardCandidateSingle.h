/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidate.h"
#import "UIKit-Structs.h"

@class NSString;

@interface UIKeyboardCandidateSingle : UIKeyboardCandidate {
@private
	NSString *_candidate;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *candidate;	// G=0x3011c915; S=0x3011c8f1; @synthesize=_candidate
- (id)initWithCandidate:(id)candidate;	// 0x3011c8a9
// declared property getter: - (id)candidate;	// 0x3011c915
- (id)copyWithZone:(NSZone *)zone;	// 0x303116e1
- (void)dealloc;	// 0x30121b81
// declared property setter: - (void)setCandidate:(id)candidate;	// 0x3011c8f1
@end

