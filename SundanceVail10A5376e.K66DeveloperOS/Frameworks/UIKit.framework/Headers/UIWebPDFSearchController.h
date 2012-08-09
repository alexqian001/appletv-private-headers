/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebPDFSearchOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class NSString, UIPDFDocument, NSMutableArray, NSOperationQueue, NSArray;
@protocol UIWebPDFSearchControllerDelegate;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {
	unsigned _resultIndexWhenLimitHit;	// 4 = 0x4
	BOOL _notifiedThatSearchBegin;	// 8 = 0x8
	unsigned _pageIndexWhenLimitHit;	// 12 = 0xc
	NSOperationQueue *_searchQueue;	// 16 = 0x10
	NSMutableArray *_results;	// 20 = 0x14
	NSString *_searchString;	// 24 = 0x18
	UIPDFDocument *_documentToSearch;	// 28 = 0x1c
	NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;	// 32 = 0x20
	unsigned startingPageIndex;	// 36 = 0x24
	float documentScale;	// 40 = 0x28
	unsigned resultLimit;	// 44 = 0x2c
}
@property(assign, nonatomic) float documentScale;	// G=0x306037fd; S=0x3060380d; @synthesize
@property(retain, nonatomic) UIPDFDocument *documentToSearch;	// G=0x306037ad; S=0x30602d2d; @synthesize=_documentToSearch
@property(readonly, assign, nonatomic) BOOL paused;	// G=0x30602df9; 
@property(assign, nonatomic) unsigned resultLimit;	// G=0x3060381d; S=0x3060382d; @synthesize
@property(retain, nonatomic) NSArray *results;	// G=0x3060385d; S=0x3060386d; @synthesize=_results
@property(assign, nonatomic) NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;	// G=0x306037bd; S=0x306037cd; @synthesize
@property(retain, nonatomic) NSString *searchString;	// G=0x3060383d; S=0x3060384d; @synthesize=_searchString
@property(readonly, assign, nonatomic) BOOL searching;	// G=0x30602db1; 
@property(assign, nonatomic) unsigned startingPageIndex;	// G=0x306037dd; S=0x306037ed; @synthesize
- (id)init;	// 0x30602e29
- (unsigned)_actualStartingPageIndex;	// 0x30602eed
- (void)_clearSearchQueue;	// 0x306031a5
- (void)cancel;	// 0x306031e1
- (void)dealloc;	// 0x30602e85
// declared property getter: - (float)documentScale;	// 0x306037fd
// declared property getter: - (id)documentToSearch;	// 0x306037ad
- (void)pause;	// 0x3060321d
// declared property getter: - (BOOL)paused;	// 0x30602df9
// declared property getter: - (unsigned)resultLimit;	// 0x3060381d
// declared property getter: - (id)results;	// 0x3060385d
- (void)resume;	// 0x3060323d
- (void)search:(id)search;	// 0x30602f19
- (void)search:(id)search hasPartialResults:(id)results;	// 0x30603685
// declared property getter: - (id)searchDelegate;	// 0x306037bd
- (void)searchDidBegin:(id)search;	// 0x30603289
- (void)searchDidFinish:(id)search;	// 0x306035ad
- (void)searchDidTimeOut:(id)search;	// 0x30603351
- (void)searchLimitHit:(id)hit;	// 0x306034b9
// declared property getter: - (id)searchString;	// 0x3060383d
- (void)searchWasCancelled:(id)cancelled;	// 0x30603405
// declared property getter: - (BOOL)searching;	// 0x30602db1
// declared property setter: - (void)setDocumentScale:(float)scale;	// 0x3060380d
// declared property setter: - (void)setDocumentToSearch:(id)search;	// 0x30602d2d
// declared property setter: - (void)setResultLimit:(unsigned)limit;	// 0x3060382d
// declared property setter: - (void)setResults:(id)results;	// 0x3060386d
// declared property setter: - (void)setSearchDelegate:(id)delegate;	// 0x306037cd
// declared property setter: - (void)setSearchString:(id)string;	// 0x3060384d
// declared property setter: - (void)setStartingPageIndex:(unsigned)index;	// 0x306037ed
// declared property getter: - (unsigned)startingPageIndex;	// 0x306037dd
@end
