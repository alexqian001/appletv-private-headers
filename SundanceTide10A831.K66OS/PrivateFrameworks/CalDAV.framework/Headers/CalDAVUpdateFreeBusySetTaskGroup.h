/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL, NSString, CoreDAVPropFindTask;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {
	int _state;	// 44 = 0x2c
	NSURL *_inboxURL;	// 48 = 0x30
	NSURL *_urlToAdd;	// 52 = 0x34
	NSString *_suffixToFilterOut;	// 56 = 0x38
	CoreDAVPropFindTask *_fetchTask;	// 60 = 0x3c
}
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) CoreDAVPropFindTask *fetchTask;	// G=0x347001e9; S=0x347001fd; @synthesize=_fetchTask
@property(retain) NSURL *inboxURL;	// G=0x3470017d; S=0x34700191; @synthesize=_inboxURL
@property(assign) int state;	// G=0x34700151; S=0x34700165; @synthesize=_state
@property(retain) NSString *suffixToFilterOut;	// G=0x347001c5; S=0x347001d9; @synthesize=_suffixToFilterOut
@property(retain) NSURL *urlToAdd;	// G=0x347001a1; S=0x347001b5; @synthesize=_urlToAdd
- (id)initWithAccountInfoProvider:(id)accountInfoProvider inboxURL:(id)url urlToAdd:(id)add suffixToFilterOut:(id)filterOut taskManager:(id)manager;	// 0x346ff8bd
- (void)_finishWithError:(id)error state:(int)state;	// 0x346ffe05
- (void)_startFetchFreeBusySet;	// 0x346ff965
- (void)_startPropPatchWithURLs:(id)urls;	// 0x346ffb55
- (void)dealloc;	// 0x346ff83d
// declared property getter: - (id)fetchTask;	// 0x347001e9
// declared property getter: - (id)inboxURL;	// 0x3470017d
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x346ffe39
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x347000f1
// declared property setter: - (void)setFetchTask:(id)task;	// 0x347001fd
// declared property setter: - (void)setInboxURL:(id)url;	// 0x34700191
// declared property setter: - (void)setState:(int)state;	// 0x34700165
// declared property setter: - (void)setSuffixToFilterOut:(id)filterOut;	// 0x347001d9
// declared property setter: - (void)setUrlToAdd:(id)add;	// 0x347001b5
- (void)startTaskGroup;	// 0x346ffdf5
// declared property getter: - (int)state;	// 0x34700151
// declared property getter: - (id)suffixToFilterOut;	// 0x347001c5
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3470013d
// declared property getter: - (id)urlToAdd;	// 0x347001a1
@end
