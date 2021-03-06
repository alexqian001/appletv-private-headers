/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSOrderedSet, NSString, NSArray;

@interface UIKeyboardCandidateGroup : NSObject {
	NSString *_title;	// 4 = 0x4
	NSOrderedSet *_candidates;	// 8 = 0x8
	NSArray *_nonExtensionCandidates;	// 12 = 0xc
}
@property(copy) NSOrderedSet *candidates;	// G=0x3305c651; S=0x3305c665; @synthesize=_candidates
@property(retain) NSArray *nonExtensionCandidates;	// G=0x3305c3ad; S=0x3305c545; @synthesize=_nonExtensionCandidates
@property(copy) NSString *title;	// G=0x3305c62d; S=0x3305c641; @synthesize=_title
- (id)initWithTitle:(id)title candidates:(id)candidates;	// 0x3305bfb5
- (void)addCandidate:(id)candidate;	// 0x3305c2d5
// declared property getter: - (id)candidates;	// 0x3305c651
- (void)dealloc;	// 0x3305c015
- (BOOL)hasAlternativeText;	// 0x3305c269
- (unsigned)hash;	// 0x3305c155
- (BOOL)isEqual:(id)equal;	// 0x3305c08d
- (id)mutableCandidates;	// 0x3305c1a9
// declared property getter: - (id)nonExtensionCandidates;	// 0x3305c3ad
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x3305c665
// declared property setter: - (void)setNonExtensionCandidates:(id)candidates;	// 0x3305c545
// declared property setter: - (void)setTitle:(id)title;	// 0x3305c641
- (void)sortUsingComparator:(id)comparator;	// 0x3305c321
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x3305c365
// declared property getter: - (id)title;	// 0x3305c62d
@end

