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
@property(assign, nonatomic) NSObject<MSSearchDelegate> *delegate;	// G=0x34476705; S=0x34476069; @synthesize=_delegate
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x34475ec1
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes delegate:(id)delegate;	// 0x34475ef9
+ (void)setUnitTestingResultsArray:(id)array;	// 0x34476715
- (void)_delegateDidFindResults:(id)_delegate;	// 0x3447650d
- (void)_delegateDidFinishWithError:(id)_delegate;	// 0x344764a9
- (void)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes;	// 0x3447620d
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x34476591
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x344765c5
- (id)_initWithDelegate:(id)delegate;	// 0x34475f6d
- (BOOL)_unitTestsAreEnabled;	// 0x34476581
- (void)dealloc;	// 0x34476019
// declared property getter: - (id)delegate;	// 0x34476705
- (void)responseConnection:(id)connection handleError:(id)error;	// 0x3447609d
- (void)responseConnection:(id)connection handleResponse:(id)response;	// 0x344760f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34476069
@end

