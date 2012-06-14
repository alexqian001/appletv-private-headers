/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString;
@protocol MSStreamsProtocolDelegate;

@interface MSStreamsProtocol : NSObject {
@private
	id<MSStreamsProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
}
@property(assign, nonatomic) id<MSStreamsProtocolDelegate> delegate;	// G=0x3399b821; S=0x3399b831; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *deleteURL;	// G=0x3399b581; 
@property(readonly, assign, nonatomic) NSURL *getURL;	// G=0x3399b1d5; 
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x3399b841; @synthesize=_personID
@property(readonly, assign, nonatomic) NSURL *putURL;	// G=0x3399b291; 
@property(readonly, assign, nonatomic) NSURL *reauthorizeURL;	// G=0x3399b409; 
@property(readonly, assign, nonatomic) NSURL *resetURL;	// G=0x3399b34d; 
@property(readonly, assign, nonatomic) NSURL *uploadCompleteURL;	// G=0x3399b4c5; 
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3399b16d
- (void).cxx_destruct;	// 0x3399b851
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x3399b6b9
- (void)_didReceiveRetryAfterDate:(id)date;	// 0x3399b741
- (void)_refreshAuthTokenForContext:(MSSPCContext *)context;	// 0x3399b7d1
- (void)abort;	// 0x3399b63d
// declared property getter: - (id)delegate;	// 0x3399b821
// declared property getter: - (id)deleteURL;	// 0x3399b581
- (id)deviceInfoDict;	// 0x3399b665
// declared property getter: - (id)getURL;	// 0x3399b1d5
// declared property getter: - (id)personID;	// 0x3399b841
// declared property getter: - (id)putURL;	// 0x3399b291
// declared property getter: - (id)reauthorizeURL;	// 0x3399b409
// declared property getter: - (id)resetURL;	// 0x3399b34d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3399b831
// declared property getter: - (id)uploadCompleteURL;	// 0x3399b4c5
@end
