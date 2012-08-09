/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSOrderedSet;

@interface UIKeyboardCandidateGroup : NSObject {
	NSString *_title;	// 4 = 0x4
	NSOrderedSet *_candidates;	// 8 = 0x8
	NSArray *_nonExtensionCandidates;	// 12 = 0xc
}
@property(copy) NSOrderedSet *candidates;	// G=0x30fc2d2d; S=0x30fc2d41; @synthesize=_candidates
@property(retain) NSArray *nonExtensionCandidates;	// G=0x30fc2a89; S=0x30fc2c21; @synthesize=_nonExtensionCandidates
@property(copy) NSString *title;	// G=0x30fc2d09; S=0x30fc2d1d; @synthesize=_title
- (id)initWithTitle:(id)title candidates:(id)candidates;	// 0x30fc26fd
- (void)addCandidate:(id)candidate;	// 0x30fc29b1
// declared property getter: - (id)candidates;	// 0x30fc2d2d
- (void)dealloc;	// 0x30fc275d
- (unsigned)hash;	// 0x30fc289d
- (BOOL)isEqual:(id)equal;	// 0x30fc27d5
- (id)mutableCandidates;	// 0x30fc28f1
// declared property getter: - (id)nonExtensionCandidates;	// 0x30fc2a89
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x30fc2d41
// declared property setter: - (void)setNonExtensionCandidates:(id)candidates;	// 0x30fc2c21
// declared property setter: - (void)setTitle:(id)title;	// 0x30fc2d1d
- (void)sortUsingComparator:(id)comparator;	// 0x30fc29fd
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x30fc2a41
// declared property getter: - (id)title;	// 0x30fc2d09
@end
