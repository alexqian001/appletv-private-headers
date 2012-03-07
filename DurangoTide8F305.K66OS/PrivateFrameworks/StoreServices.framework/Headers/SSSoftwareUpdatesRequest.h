/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest {
@private
	SSSoftwareUpdatesContext *_context;	// 36 = 0x24
}
@property(assign, nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSSoftwareUpdatesContext *updateQueueContext;	// G=0x324ce17d; 
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324ce1ad
- (id)initWithUpdateQueueContext:(id)updateQueueContext;	// 0x324ce2fd
- (void)_sendResponseToDelegate:(id)delegate;	// 0x324ce0b1
- (id)copyPropertyListEncoding;	// 0x324ce245
- (void)dealloc;	// 0x324ce2b5
- (id)handleFailureResponse:(id)response;	// 0x324ce34d
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x324ce11d
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324ce3e1
// declared property getter: - (id)updateQueueContext;	// 0x324ce17d
@end
