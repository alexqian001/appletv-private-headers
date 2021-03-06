/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import <NSObject.h> // Unknown library

@class UIKeyboardCandidateView, NSString, UIView, NSArray;
@protocol UIKeyboardCandidateViewInline;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInline : NSObject <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
	NSArray *m_candidates;	// 4 = 0x4
	NSString *m_inlineText;	// 8 = 0x8
	CGRect m_inlineRect;	// 12 = 0xc
	UIView<UIKeyboardCandidateList> *m_inlineView;	// 28 = 0x1c
	UIKeyboardCandidateView<UIKeyboardCandidateViewInline> *m_extendedView;	// 32 = 0x20
	struct {
		unsigned isExtended;
	} _inlineFlags;	// 36 = 0x24
	int _promptTextType;	// 40 = 0x28
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 44 = 0x2c
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x32d6b339; S=0x32d6b349; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x32d6b299; S=0x32d6b2a9; @synthesize=m_candidates
@property(assign, nonatomic) CGRect inlineRect;	// G=0x32d6b2d9; S=0x32d6b2fd; @synthesize=m_inlineRect
@property(retain, nonatomic) NSString *inlineText;	// G=0x32d6b2b9; S=0x32d6b2c9; @synthesize=m_inlineText
@property(assign, nonatomic) int promptTextType;	// G=0x32d6b319; S=0x32d6b329; @synthesize=_promptTextType
+ (id)sharedInstance;	// 0x32d6a4ad
- (id)init;	// 0x32d6a53d
- (id)_inlineView;	// 0x32d6b359
- (id)activeCandidateList;	// 0x32d6a775
- (void)animateInlineCandidate;	// 0x32d6aab9
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x32d6ae95
- (id)candidateAtIndex:(unsigned)index;	// 0x32d6ae69
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x32d6b1b1
// declared property getter: - (id)candidateListDelegate;	// 0x32d6b339
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x32d6b205
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x32d6b255
// declared property getter: - (id)candidates;	// 0x32d6b299
- (void)candidatesDidChange;	// 0x32d6aa79
- (void)configureKeyboard:(id)keyboard;	// 0x32d6af39
- (unsigned)count;	// 0x32d6af11
- (id)currentCandidate;	// 0x32d6ade5
- (unsigned)currentIndex;	// 0x32d6ae41
- (void)dealloc;	// 0x32d6a71d
// declared property getter: - (CGRect)inlineRect;	// 0x32d6b2d9
// declared property getter: - (id)inlineText;	// 0x32d6b2b9
- (BOOL)isReducedWidth;	// 0x32d6a4f5
- (void)layout;	// 0x32d6aabd
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x32d6aab5
// declared property getter: - (int)promptTextType;	// 0x32d6b319
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x32d6b349
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x32d6b2a9
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32d6b15d
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32d6b055
- (void)setCompletionContext:(id)context;	// 0x32d6b1a1
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x32d6b2fd
// declared property setter: - (void)setInlineText:(id)text;	// 0x32d6b2c9
- (void)setInlineViewExtended:(BOOL)extended;	// 0x32d6a7b5
// declared property setter: - (void)setPromptTextType:(int)type;	// 0x32d6b329
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x32d6ab09
- (void)showCandidate:(id)candidate;	// 0x32d6aba1
- (void)showCandidateAtIndex:(unsigned)index;	// 0x32d6abcd
- (void)showNextCandidate;	// 0x32d6ac79
- (void)showNextPage;	// 0x32d6ad95
- (void)showPageAtIndex:(unsigned)index;	// 0x32d6ad69
- (void)showPreviousCandidate;	// 0x32d6acf1
- (void)showPreviousPage;	// 0x32d6adbd
@end

