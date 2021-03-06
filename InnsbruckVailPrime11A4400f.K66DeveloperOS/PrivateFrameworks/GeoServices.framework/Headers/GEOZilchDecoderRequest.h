/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOMapRequest.h"
#import "GeoServices-Structs.h"

@class NSError, GEOZilchDecoder;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoderRequest : GEOMapRequest {
	unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel> > _mapModel;	// 16 = 0x10
	GEOZilchDecoder *_decoder;	// 20 = 0x14
	shared_ptr<zilch::Message> _message;	// 24 = 0x18
	id _pathHandler;	// 32 = 0x20
	id _errorHandler;	// 36 = 0x24
	NSError *_firstTileLoadingError;	// 40 = 0x28
	NSObject<OS_dispatch_semaphore> *_finishedSemaphore;	// 44 = 0x2c
}
@property(copy) id errorHandler;	// G=0x30fa358d; S=0x30fa35a1; @synthesize=_errorHandler
@property(copy) id pathHandler;	// G=0x30fa3569; S=0x30fa357d; @synthesize=_pathHandler
- (id)initWithDecoder:(id)decoder message:(shared_ptr<zilch::Message>)message;	// 0x30fa2f55
- (id).cxx_construct;	// 0x30fa35f1
- (void).cxx_destruct;	// 0x30fa35b1
- (void)cancel;	// 0x30fa34e5
- (void)dealloc;	// 0x30fa3105
- (void)decodeWithPathHandler:(id)pathHandler errorHandler:(id)handler;	// 0x30fa3191
// declared property getter: - (id)errorHandler;	// 0x30fa358d
// declared property getter: - (id)pathHandler;	// 0x30fa3569
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x30fa35a1
// declared property setter: - (void)setPathHandler:(id)handler;	// 0x30fa357d
@end

