/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSObject;
@protocol OS_dispatch_queue, MSSearchDelegate;

@interface MSSearch : MSMailDefaultService {
	NSObject<OS_dispatch_queue> *_resultsQueue;	// 32 = 0x20
	NSObject<MSSearchDelegate> *_delegate;	// 36 = 0x24
}
@property(assign, nonatomic) NSObject<MSSearchDelegate> *delegate;	// G=0x3686c715; S=0x3686c079; @synthesize=_delegate
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x3686bed1
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes delegate:(id)delegate;	// 0x3686bf09
+ (void)setUnitTestingResultsArray:(id)array;	// 0x3686c725
- (void)_delegateDidFindResults:(id)_delegate;	// 0x3686c51d
- (void)_delegateDidFinishWithError:(id)_delegate;	// 0x3686c4b9
- (void)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes;	// 0x3686c21d
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x3686c5a1
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x3686c5d5
- (id)_initWithDelegate:(id)delegate;	// 0x3686bf7d
- (BOOL)_unitTestsAreEnabled;	// 0x3686c591
- (void)dealloc;	// 0x3686c029
// declared property getter: - (id)delegate;	// 0x3686c715
- (void)responseConnection:(id)connection handleError:(id)error;	// 0x3686c0ad
- (void)responseConnection:(id)connection handleResponse:(id)response;	// 0x3686c101
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3686c079
@end

