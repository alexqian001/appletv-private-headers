/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCopying.h"
#import "ASTask.h"
#import "DAEAS-Structs.h"

@class NSMutableSet, NSArray, NSString, NSSet, ASMailMessage;

@interface ASFolderItemsSyncTask : ASTask <NSCopying> {
	NSString *_folderID;	// 108 = 0x6c
	NSString *_previousSyncKey;	// 112 = 0x70
	int _dataclass;	// 116 = 0x74
	NSArray *_actions;	// 120 = 0x78
	NSMutableSet *_rejectedServerIds;	// 124 = 0x7c
	BOOL _isInitialSync;	// 128 = 0x80
	BOOL _isInitialBootstrapSync;	// 129 = 0x81
	BOOL _willUpdate;	// 130 = 0x82
	BOOL _moreAvailable;	// 131 = 0x83
	BOOL _isResyncAfterConnectionFailed;	// 132 = 0x84
	BOOL _haveShortcut121Response;	// 133 = 0x85
	int _numReplacedItems;	// 136 = 0x88
	int _numDownloadedElements;	// 140 = 0x8c
	BOOL _isSpinning;	// 144 = 0x90
	int _bodyTruncationBytes;	// 148 = 0x94
	int _mimeSupport;	// 152 = 0x98
	int _filterDays;	// 156 = 0x9c
	ASMailMessage *_streamingMailMessage;	// 160 = 0xa0
	NSArray *_perservedActions;	// 164 = 0xa4
	NSArray *_pushedActions;	// 168 = 0xa8
	BOOL _hadFalseMoreAvailable;	// 172 = 0xac
	BOOL _deletesAsMoves;	// 173 = 0xad
}
@property(retain) NSArray *actions;	// G=0x36e5a11d; S=0x36e5a131; @synthesize=_actions
@property(assign) int bodyTruncationBytes;	// G=0x36e5a05d; S=0x36e5a071; @synthesize=_bodyTruncationBytes
@property(assign) int dataclass;	// G=0x36e5a141; S=0x36e5a155; @synthesize=_dataclass
@property(assign) int filterDays;	// G=0x36e5a089; S=0x36e5a09d; @synthesize=_filterDays
@property(readonly, assign) NSString *folderID;	// G=0x36e5a0d9; @synthesize=_folderID
@property(assign) BOOL isInitialBootstrapSync;	// G=0x36e5a19d; S=0x36e5a1b5; @synthesize=_isInitialBootstrapSync
@property(assign) BOOL isInitialSync;	// G=0x36e5a16d; S=0x36e5a185; @synthesize=_isInitialSync
@property(assign) BOOL isResyncAfterConnectionFailed;	// G=0x36e5a235; S=0x36e5a24d; @synthesize=_isResyncAfterConnectionFailed
@property(assign, setter=setMIMESupport:) int mimeSupport;	// G=0x36e5a031; S=0x36e5a045; @synthesize=_mimeSupport
@property(assign) BOOL moreAvailable;	// G=0x36e5a1cd; S=0x36e5a1e5; @synthesize=_moreAvailable
@property(readonly, assign) int numDownloadedElements;	// G=0x36e59f69; converted property
@property(retain) NSArray *perservedActions;	// G=0x36e5a265; S=0x36e5a279; @synthesize=_perservedActions
@property(copy) NSString *previousSyncKey;	// G=0x36e5a0b5; S=0x36e5a0c9; @synthesize=_previousSyncKey
@property(readonly, assign) NSString *previousSyncKeyForAgent;	// G=0x36e59f79; 
@property(retain) NSArray *pushedActions;	// G=0x36e5a289; S=0x36e5a29d; @synthesize=_pushedActions
@property(readonly, assign) NSSet *rejectedServerIds;	// G=0x36e5a221; @synthesize=_rejectedServerIds
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x36e5a1fd; S=0x36e5a211; @synthesize=_streamingMailMessage
@property(assign) BOOL willUpdate;	// G=0x36e5a0ed; S=0x36e5a105; @synthesize=_willUpdate
- (id)initWithFolderID:(id)folderID;	// 0x36e57719
- (id)initWithFolderID:(id)folderID deletesAsMoves:(BOOL)moves;	// 0x36e5772d
- (void)_addRejectedServerId:(id)anId;	// 0x36e59605
- (int)_bodyTruncationCode;	// 0x36e57f89
- (void)_handleChangedLeaf:(id)leaf addedChangesPtr:(id *)ptr modifiedChangesPtr:(id *)ptr3 removedChangesPtr:(id *)ptr4;	// 0x36e58505
- (void)_handleResponseToLeaf:(id)leaf addedResponsesPtr:(id *)ptr modifiedResponsesPtr:(id *)ptr3 removedResponsesPtr:(id *)ptr4 fetchedResponsesPtr:(id *)ptr5;	// 0x36e585d1
- (int)_mimeSupportCode;	// 0x36e57f4d
- (int)_mimeTruncationCode;	// 0x36e57fc9
- (void)_setSpinning:(BOOL)spinning;	// 0x36e574f9
// declared property getter: - (id)actions;	// 0x36e5a11d
- (void)appendActionData:(id)data;	// 0x36e579e9
- (void)appendSupportedFieldsData:(id)data;	// 0x36e57c31
// declared property getter: - (int)bodyTruncationBytes;	// 0x36e5a05d
- (int)bodyType;	// 0x36e579ad
- (BOOL)checkForErrorInContext:(id)context;	// 0x36e58c59
- (int)commandCode;	// 0x36e574f5
- (int)connectionActionForResponse:(id)response;	// 0x36e58b8d
- (id)copyWithZone:(NSZone *)zone;	// 0x36e577dd
// declared property getter: - (int)dataclass;	// 0x36e5a141
- (void)dealloc;	// 0x36e5762d
// declared property getter: - (int)filterDays;	// 0x36e5a089
- (void)finishWithError:(id)error;	// 0x36e59679
// declared property getter: - (id)folderID;	// 0x36e5a0d9
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x36e58c45
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x36e586e9
// declared property getter: - (BOOL)isInitialBootstrapSync;	// 0x36e5a19d
// declared property getter: - (BOOL)isInitialSync;	// 0x36e5a16d
// declared property getter: - (BOOL)isResyncAfterConnectionFailed;	// 0x36e5a235
// declared property getter: - (int)mimeSupport;	// 0x36e5a031
// declared property getter: - (BOOL)moreAvailable;	// 0x36e5a1cd
// converted property getter: - (int)numDownloadedElements;	// 0x36e59f69
- (double)percentComplete;	// 0x36e59e31
// declared property getter: - (id)perservedActions;	// 0x36e5a265
// declared property getter: - (id)previousSyncKey;	// 0x36e5a0b5
// declared property getter: - (id)previousSyncKeyForAgent;	// 0x36e59f79
- (BOOL)processContext:(id)context;	// 0x36e59095
// declared property getter: - (id)pushedActions;	// 0x36e5a289
// declared property getter: - (id)rejectedServerIds;	// 0x36e5a221
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x36e5885d
- (void)reportStatusWithError:(id)error;	// 0x36e59fa5
- (id)requestBody;	// 0x36e58009
// declared property setter: - (void)setActions:(id)actions;	// 0x36e5a131
// declared property setter: - (void)setBodyTruncationBytes:(int)bytes;	// 0x36e5a071
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x36e5a155
// declared property setter: - (void)setFilterDays:(int)days;	// 0x36e5a09d
// declared property setter: - (void)setIsInitialBootstrapSync:(BOOL)sync;	// 0x36e5a1b5
// declared property setter: - (void)setIsInitialSync:(BOOL)sync;	// 0x36e5a185
// declared property setter: - (void)setIsResyncAfterConnectionFailed:(BOOL)failed;	// 0x36e5a24d
// declared property setter: - (void)setMIMESupport:(int)support;	// 0x36e5a045
// declared property setter: - (void)setMoreAvailable:(BOOL)available;	// 0x36e5a1e5
// declared property setter: - (void)setPerservedActions:(id)actions;	// 0x36e5a279
// declared property setter: - (void)setPreviousSyncKey:(id)key;	// 0x36e5a0c9
// declared property setter: - (void)setPushedActions:(id)actions;	// 0x36e5a29d
// declared property setter: - (void)setStreamingMailMessage:(id)message;	// 0x36e5a211
// declared property setter: - (void)setWillUpdate:(BOOL)update;	// 0x36e5a105
// declared property getter: - (id)streamingMailMessage;	// 0x36e5a1fd
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x36e59ec5
// declared property getter: - (BOOL)willUpdate;	// 0x36e5a0ed
@end

