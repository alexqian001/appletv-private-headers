/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol WebInspectorXPCWrapperDelegate, OS_xpc_object;

@interface WebInspectorXPCWrapper : NSObject {
@private
	id<WebInspectorXPCWrapperDelegate> _delegate;	// 4 = 0x4
	NSString *_tag;	// 8 = 0x8
	NSObject<OS_xpc_object> *_connection;	// 12 = 0xc
	NSObject<OS_xpc_object> *_currentMessage;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL available;	// G=0x350678c1; 
@property(assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x3506791d; S=0x3506792d; @synthesize=_connection
@property(assign, nonatomic) NSObject<OS_xpc_object> *currentMessage;	// G=0x3506793d; S=0x3506794d; @synthesize=_currentMessage
@property(assign, nonatomic) id<WebInspectorXPCWrapperDelegate> delegate;	// G=0x350678d9; S=0x350678e9; @synthesize=_delegate
@property(copy, nonatomic) NSString *tag;	// G=0x350678f9; S=0x3506790d; @synthesize=_tag
- (id)initWithConnection:(id)connection;	// 0x350670c1
- (id)_deserializeMessage:(id)message;	// 0x35067211
- (void)_handleEvent:(id)event;	// 0x35067401
// declared property getter: - (BOOL)available;	// 0x350678c1
- (void)barrierWithCompletionHandler:(id)completionHandler;	// 0x35067845
- (void)close;	// 0x35067185
// declared property getter: - (id)connection;	// 0x3506791d
// declared property getter: - (id)currentMessage;	// 0x3506793d
- (void)dealloc;	// 0x350671b1
// declared property getter: - (id)delegate;	// 0x350678d9
- (void)sendMessage:(id)message userInfo:(id)info;	// 0x350674fd
- (void)sendMessage:(id)message userInfo:(id)info replyHandler:(id)handler;	// 0x35067521
// declared property setter: - (void)setConnection:(id)connection;	// 0x3506792d
// declared property setter: - (void)setCurrentMessage:(id)message;	// 0x3506794d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x350678e9
// declared property setter: - (void)setTag:(id)tag;	// 0x3506790d
// declared property getter: - (id)tag;	// 0x350678f9
@end

