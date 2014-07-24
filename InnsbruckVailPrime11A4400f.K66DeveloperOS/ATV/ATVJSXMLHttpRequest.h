/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURLConnection, NSHTTPURLResponse, NSMutableData, ATVJavaScriptContext, NSMutableArray, NSMutableURLRequest;

__attribute__((visibility("hidden")))
@interface ATVJSXMLHttpRequest : XXUnknownSuperclass {
	ATVJavaScriptContext *_context;	// 4 = 0x4
	OpaqueJSValue *_object;	// 8 = 0x8
	BOOL _isObjectProtected;	// 12 = 0xc
	BOOL _shouldSquashOnReadyStateEvents;	// 13 = 0xd
	int _onReadyStateChangeMessageQueueLock;	// 16 = 0x10
	NSMutableArray *_onReadyStateChangeMessageQueue;	// 20 = 0x14
	unsigned _readyState;	// 24 = 0x18
	NSMutableURLRequest *_urlRequest;	// 28 = 0x1c
	NSURLConnection *_urlConnection;	// 32 = 0x20
	BOOL _async;	// 36 = 0x24
	NSString *_user;	// 40 = 0x28
	NSString *_password;	// 44 = 0x2c
	NSHTTPURLResponse *_urlResponse;	// 48 = 0x30
	unsigned _statusCode;	// 52 = 0x34
	NSString *_statusText;	// 56 = 0x38
	NSMutableData *_receivedData;	// 60 = 0x3c
}
@property(assign, nonatomic) unsigned readyState;	// G=0x1507dd; S=0x14fe39; @synthesize=_readyState
@property(retain) NSMutableData *receivedData;	// G=0x15089d; S=0x1508b1; @synthesize=_receivedData
@property(assign, nonatomic) unsigned statusCode;	// G=0x150859; S=0x150869; @synthesize=_statusCode
@property(copy) NSString *statusText;	// G=0x150879; S=0x15088d; @synthesize=_statusText
@property(retain) NSURLConnection *urlConnection;	// G=0x150811; S=0x150825; @synthesize=_urlConnection
@property(retain) NSMutableURLRequest *urlRequest;	// G=0x1507ed; S=0x150801; @synthesize=_urlRequest
@property(retain) NSHTTPURLResponse *urlResponse;	// G=0x150835; S=0x150849; @synthesize=_urlResponse
+ (void)_immediateUpdateJSObjectState:(OpaqueJSContext *)state object:(OpaqueJSValue *)object readyState:(unsigned)state3 statusCode:(unsigned)code statusText:(id)text shouldCallOnReadyStateChange:(BOOL)change;	// 0x14fa81
+ (void)registerClassInContext:(OpaqueJSContext *)context;	// 0x14eaa5
- (id)initWithContext:(OpaqueJSContext *)context jsObject:(OpaqueJSValue *)object;	// 0x14f881
- (void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;	// 0x14fde5
- (id)_dequeueReadyStateChangeMessage;	// 0x14fd49
- (void)_enqueueReadyStateChangeMessageRespectingSquash;	// 0x14fb29
- (void)_immediateOnReadyStateChangeCall:(OpaqueJSContext *)call;	// 0x14fc19
- (void)_jsObjectWasFinalized;	// 0x150709
- (void)_scheduleOnReadyStateChangeCall;	// 0x14fcbd
- (void)_unprotectJSObjectIfNecessary;	// 0x150729
- (void)abortWithContext:(OpaqueJSContext *)context;	// 0x1503a5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x1505e9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x1505a5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x1504e9
- (void)connectionDidFinishLoading:(id)connection;	// 0x1506b1
- (void)dealloc;	// 0x14f991
- (void)openWithMethod:(id)method url:(id)url async:(BOOL)async user:(id)user password:(id)password;	// 0x14fe61
// declared property getter: - (unsigned)readyState;	// 0x1507dd
// declared property getter: - (id)receivedData;	// 0x15089d
- (void)sendWithData:(id)data jsContext:(OpaqueJSContext *)context;	// 0x14ffa5
// declared property setter: - (void)setReadyState:(unsigned)state;	// 0x14fe39
// declared property setter: - (void)setReceivedData:(id)data;	// 0x1508b1
// declared property setter: - (void)setStatusCode:(unsigned)code;	// 0x150869
// declared property setter: - (void)setStatusText:(id)text;	// 0x15088d
// declared property setter: - (void)setUrlConnection:(id)connection;	// 0x150825
// declared property setter: - (void)setUrlRequest:(id)request;	// 0x150801
// declared property setter: - (void)setUrlResponse:(id)response;	// 0x150849
// declared property getter: - (unsigned)statusCode;	// 0x150859
// declared property getter: - (id)statusText;	// 0x150879
// declared property getter: - (id)urlConnection;	// 0x150811
// declared property getter: - (id)urlRequest;	// 0x1507ed
// declared property getter: - (id)urlResponse;	// 0x150835
@end
