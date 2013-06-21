/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, CAAnimation;

__attribute__((visibility("hidden")))
@interface ATVChainedAnimationGroup : XXUnknownSuperclass {
	CAAnimation *_defaultFillerAnimation;	// 4 = 0x4
	NSMutableArray *_tuples;	// 8 = 0x8
	BOOL _evaluated;	// 12 = 0xc
}
@property(retain, nonatomic) CAAnimation *defaultFillerAnimation;	// G=0x408c65; S=0x408c75; @synthesize=_defaultFillerAnimation
@property(assign, nonatomic) BOOL evaluated;	// G=0x408cd5; S=0x408ce5; @synthesize=_evaluated
@property(retain, nonatomic) NSMutableArray *tuples;	// G=0x408c9d; S=0x408cad; @synthesize=_tuples
- (void).cxx_destruct;	// 0x408cf5
- (void)_evaluateTuplesWithContinuationCheck;	// 0x408729
- (void)_evaluateTuplesWithoutContinuationCheck;	// 0x408631
- (void)addChainedAnimation:(id)animation forKey:(id)key inView:(id)view;	// 0x407f41
- (void)cleanUp;	// 0x408551
// declared property getter: - (id)defaultFillerAnimation;	// 0x408c65
- (void)evaluate;	// 0x40807d
// declared property getter: - (BOOL)evaluated;	// 0x408cd5
// declared property setter: - (void)setDefaultFillerAnimation:(id)animation;	// 0x408c75
// declared property setter: - (void)setEvaluated:(BOOL)evaluated;	// 0x408ce5
// declared property setter: - (void)setTuples:(id)tuples;	// 0x408cad
// declared property getter: - (id)tuples;	// 0x408c9d
@end
