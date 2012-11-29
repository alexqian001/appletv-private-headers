/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVGetTaskDelegate.h"

@class NSMutableArray, NSURL, NSMutableDictionary, NSString, NSArray, NSDictionary, NSMutableSet;
@protocol CoreDAVLocalDBInfoProvider;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	BOOL _ensureUpdatedCTag;	// 60 = 0x3c
	BOOL _useSyncCollection;	// 61 = 0x3d
	NSString *_previousSyncToken;	// 64 = 0x40
	NSString *_nextSyncToken;	// 68 = 0x44
	NSMutableArray *_actions;	// 72 = 0x48
	void *_context;	// 76 = 0x4c
	unsigned _multiGetBatchSize;	// 80 = 0x50
	NSMutableArray *_unsubmittedTasks;	// 84 = 0x54
	unsigned _maxIndependentTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSDictionary *_bulkRequests;	// 100 = 0x64
	NSString *_bulkChangeCheckCTag;	// 104 = 0x68
	NSMutableSet *_syncReportDeletedURLs;	// 108 = 0x6c
	NSMutableDictionary *_urlToETag;	// 112 = 0x70
	Class _appSpecificDataItemClass;	// 116 = 0x74
	BOOL _syncItemOrder;	// 120 = 0x78
	NSMutableArray *_localItemURLOrder;	// 124 = 0x7c
	NSMutableDictionary *_remainingUUIDsToAddActions;	// 128 = 0x80
	NSMutableDictionary *_remainingHREFsToModDeleteActions;	// 132 = 0x84
	BOOL _actionsOnly;	// 136 = 0x88
}
@property(assign) BOOL actionsOnly;	// G=0x33402da1; S=0x33402db9; @synthesize=_actionsOnly
@property(retain) NSURL *addMemberURL;	// G=0x33402ba5; S=0x33402bb9; @synthesize=_addMemberURL
@property(retain) NSString *bulkChangeCheckCTag;	// G=0x33402d7d; S=0x33402d91; @synthesize=_bulkChangeCheckCTag
@property(retain) NSDictionary *bulkRequests;	// G=0x33402d59; S=0x33402d6d; @synthesize=_bulkRequests
@property(readonly, assign) void *context;	// G=0x33402d31; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBInfoProvider> delegate;	// @dynamic
@property(assign) BOOL ensureUpdatedCTag;	// G=0x33402cad; S=0x33402cc5; @synthesize=_ensureUpdatedCTag
@property(readonly, assign) NSURL *folderURL;	// G=0x33402c51; @synthesize=_folderURL
@property(readonly, assign) NSArray *localItemURLOrder;	// G=0x33402d45; @synthesize=_localItemURLOrder
@property(assign) unsigned maxIndependentTasks;	// G=0x33402bf5; S=0x33402c09; @synthesize=_maxIndependentTasks
@property(assign) unsigned multiGetBatchSize;	// G=0x33402bc9; S=0x33402bdd; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x33402c89; S=0x33402c9d; @synthesize=_nextCTag
@property(retain) NSString *previousCTag;	// G=0x33402c65; S=0x33402c79; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x33402cdd; S=0x33402cf1; @synthesize=_previousSyncToken
@property(assign) BOOL useMultiGet;	// G=0x33402c21; S=0x33402c39; @synthesize=_useMultiGet
@property(assign) BOOL useSyncCollection;	// G=0x33402d01; S=0x33402d19; @synthesize=_useSyncCollection
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x333fdf99
- (void)_bulkChange;	// 0x333ffa11
- (void)_bulkChangeTask:(id)task didFinishWithError:(id)error;	// 0x33401989
- (void)_configureMultiGet:(id)get;	// 0x33400465
- (void)_getCTag;	// 0x333fe9ad
- (void)_getDataPayloads;	// 0x33400671
- (void)_getETags;	// 0x333fff89
- (void)_getOrder;	// 0x334002a1
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x33402a31
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x334011fd
- (void)_pushActions;	// 0x333fef49
- (void)_sendNextBatch;	// 0x333ff421
- (unsigned)_submitTasks;	// 0x333fe6e5
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x33401455
- (void)_tearDownAllUnsubmittedTasks;	// 0x333fe531
// declared property getter: - (BOOL)actionsOnly;	// 0x33402da1
// declared property getter: - (id)addMemberURL;	// 0x33402ba5
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x334011f9
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x33400f0d
- (void)bailWithError:(id)error;	// 0x333fe661
// declared property getter: - (id)bulkChangeCheckCTag;	// 0x33402d7d
- (Class)bulkChangeTaskClass;	// 0x333fe471
// declared property getter: - (id)bulkRequests;	// 0x33402d59
- (void)cancelTaskGroup;	// 0x333fe6a5
// declared property getter: - (void *)context;	// 0x33402d31
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x333fe4b5
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x333ffee9
- (id)copyGetTaskWithURL:(id)url;	// 0x333fe3a5
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x333fe3e9
- (id)copyPostTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x333feea5
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x333fedd5
- (id)dataContentType;	// 0x333fe42d
- (void)dealloc;	// 0x333fe1cd
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x33401d19
- (id)description;	// 0x333fe335
// declared property getter: - (BOOL)ensureUpdatedCTag;	// 0x33402cad
// declared property getter: - (id)folderURL;	// 0x33402c51
- (void)getTask:(id)task data:(id)data error:(id)error;	// 0x334026d1
- (BOOL)isWhitelistedError:(id)error;	// 0x33400e9d
// declared property getter: - (id)localItemURLOrder;	// 0x33402d45
// declared property getter: - (unsigned)maxIndependentTasks;	// 0x33402bf5
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x33402bc9
// declared property getter: - (id)nextCTag;	// 0x33402c89
// declared property getter: - (id)previousCTag;	// 0x33402c65
// declared property getter: - (id)previousSyncToken;	// 0x33402cdd
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x33401f4d
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x33400f11
// declared property setter: - (void)setActionsOnly:(BOOL)only;	// 0x33402db9
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x33402bb9
// declared property setter: - (void)setBulkChangeCheckCTag:(id)tag;	// 0x33402d91
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x33402d6d
// declared property setter: - (void)setEnsureUpdatedCTag:(BOOL)tag;	// 0x33402cc5
// declared property setter: - (void)setMaxIndependentTasks:(unsigned)tasks;	// 0x33402c09
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x33402bdd
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x33402c9d
// declared property setter: - (void)setPreviousCTag:(id)tag;	// 0x33402c79
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x33402cf1
// declared property setter: - (void)setUseMultiGet:(BOOL)get;	// 0x33402c39
// declared property setter: - (void)setUseSyncCollection:(BOOL)collection;	// 0x33402d19
- (BOOL)shouldFetchMoreETags;	// 0x33401f49
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x333fe4b9
- (void)startTaskGroup;	// 0x33400d99
- (void)syncAway;	// 0x33400e8d
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33401c51
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x333fe4bd
// declared property getter: - (BOOL)useMultiGet;	// 0x33402c21
// declared property getter: - (BOOL)useSyncCollection;	// 0x33402d01
@end
