/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropPatchTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, CoreDAVPropFindTask, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {
	int _state;	// 44 = 0x2c
	NSURL *_inboxURL;	// 48 = 0x30
	NSURL *_urlToAdd;	// 52 = 0x34
	NSString *_suffixToFilterOut;	// 56 = 0x38
	CoreDAVPropFindTask *_fetchTask;	// 60 = 0x3c
}
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) CoreDAVPropFindTask *fetchTask;	// G=0x31478d39; S=0x31478d15; @synthesize=_fetchTask
@property(retain) NSURL *inboxURL;	// G=0x31478c85; S=0x31478c61; @synthesize=_inboxURL
@property(assign) int state;	// G=0x31478675; S=0x31478685; @synthesize=_state
@property(retain) NSString *suffixToFilterOut;	// G=0x31478cfd; S=0x31478cd9; @synthesize=_suffixToFilterOut
@property(retain) NSURL *urlToAdd;	// G=0x31478cc1; S=0x31478c9d; @synthesize=_urlToAdd
- (id)initWithAccountInfoProvider:(id)accountInfoProvider inboxURL:(id)url urlToAdd:(id)add suffixToFilterOut:(id)filterOut taskManager:(id)manager;	// 0x31478fdd
- (void)_finishWithError:(id)error state:(int)state;	// 0x314788a5
- (void)_startFetchFreeBusySet;	// 0x31478695
- (void)_startPropPatchWithURLs:(id)urls;	// 0x31478d51
- (void)dealloc;	// 0x31478be5
// declared property getter: - (id)fetchTask;	// 0x31478d39
// declared property getter: - (id)inboxURL;	// 0x31478c85
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x314788d9
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x31478b85
// declared property setter: - (void)setFetchTask:(id)task;	// 0x31478d15
// declared property setter: - (void)setInboxURL:(id)url;	// 0x31478c61
// declared property setter: - (void)setState:(int)state;	// 0x31478685
// declared property setter: - (void)setSuffixToFilterOut:(id)filterOut;	// 0x31478cd9
// declared property setter: - (void)setUrlToAdd:(id)add;	// 0x31478c9d
- (void)startTaskGroup;	// 0x31478895
// declared property getter: - (int)state;	// 0x31478675
// declared property getter: - (id)suffixToFilterOut;	// 0x31478cfd
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x31478bd1
// declared property getter: - (id)urlToAdd;	// 0x31478cc1
@end

