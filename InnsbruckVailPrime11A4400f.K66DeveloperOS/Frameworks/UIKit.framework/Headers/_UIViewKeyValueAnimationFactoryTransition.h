/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class CABasicAnimation;

__attribute__((visibility("hidden")))
@interface _UIViewKeyValueAnimationFactoryTransition : NSObject {
	CABasicAnimation *_fromAnimation;	// 4 = 0x4
	CABasicAnimation *_toAnimation;	// 8 = 0x8
}
@property(retain, nonatomic) CABasicAnimation *fromAnimation;	// G=0x2f706635; S=0x2f706645; @synthesize=_fromAnimation
@property(retain, nonatomic) CABasicAnimation *toAnimation;	// G=0x2f706655; S=0x2f706665; @synthesize=_toAnimation
- (void)dealloc;	// 0x2f7065d1
// declared property getter: - (id)fromAnimation;	// 0x2f706635
// declared property setter: - (void)setFromAnimation:(id)animation;	// 0x2f706645
// declared property setter: - (void)setToAnimation:(id)animation;	// 0x2f706665
// declared property getter: - (id)toAnimation;	// 0x2f706655
@end

