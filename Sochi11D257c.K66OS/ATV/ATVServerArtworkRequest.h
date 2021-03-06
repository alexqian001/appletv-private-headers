/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, ATVImage, NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVServerArtworkRequest : XXUnknownSuperclass {
	ATVServerRequestRef _serverRequest;	// 4 = 0x4
	NSString *_artworkID;	// 8 = 0x8
	ATVImage *_artworkImage;	// 12 = 0xc
	ATVImage *_artworkScaledImage;	// 16 = 0x10
	id<BRImageProxy> _artworkImageProxy;	// 20 = 0x14
	NSNumber *_responseCode;	// 24 = 0x18
	CGSize _scaledSize;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *artworkID;	// G=0x28fc05; S=0x28fc15; @synthesize=_artworkID
@property(retain, nonatomic) ATVImage *artworkImage;	// G=0x28fc69; S=0x28fc79; @synthesize=_artworkImage
@property(retain, nonatomic) id<BRImageProxy> artworkImageProxy;	// G=0x28fcd9; S=0x28fce9; @synthesize=_artworkImageProxy
@property(retain, nonatomic) ATVImage *artworkScaledImage;	// G=0x28fca1; S=0x28fcb1; @synthesize=_artworkScaledImage
@property(retain, nonatomic) NSNumber *responseCode;	// G=0x28fcfd; S=0x28fd0d; @synthesize=_responseCode
@property(assign, nonatomic) CGSize scaledSize;	// G=0x28fc3d; S=0x28fc55; @synthesize=_scaledSize
@property(assign, nonatomic) ATVServerRequestRef serverRequest;	// G=0x28fbf5; S=0x28fbd1; @synthesize=_serverRequest
- (id)initWithServerRequest:(ATVServerRequestRef)serverRequest;	// 0x28f9e1
- (id).cxx_construct;	// 0x28fda5
- (void).cxx_destruct;	// 0x28fd35
// declared property getter: - (id)artworkID;	// 0x28fc05
// declared property getter: - (id)artworkImage;	// 0x28fc69
// declared property getter: - (id)artworkImageProxy;	// 0x28fcd9
// declared property getter: - (id)artworkScaledImage;	// 0x28fca1
- (void)dealloc;	// 0x28fad1
// declared property getter: - (id)responseCode;	// 0x28fcfd
// declared property getter: - (CGSize)scaledSize;	// 0x28fc3d
// declared property getter: - (ATVServerRequestRef)serverRequest;	// 0x28fbf5
// declared property setter: - (void)setArtworkID:(id)anId;	// 0x28fc15
// declared property setter: - (void)setArtworkImage:(id)image;	// 0x28fc79
// declared property setter: - (void)setArtworkImageProxy:(id)proxy;	// 0x28fce9
// declared property setter: - (void)setArtworkScaledImage:(id)image;	// 0x28fcb1
// declared property setter: - (void)setResponseCode:(id)code;	// 0x28fd0d
// declared property setter: - (void)setScaledSize:(CGSize)size;	// 0x28fc55
// declared property setter: - (void)setServerRequest:(ATVServerRequestRef)request;	// 0x28fbd1
@end

