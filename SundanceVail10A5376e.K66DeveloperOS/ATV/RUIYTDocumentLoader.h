/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol RUIYTDocumentLoaderDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTDocumentLoader : XXUnknownSuperclass {
	NSMutableArray *_documentsBeingLoaded;	// 4 = 0x4
	id<RUIYTDocumentLoaderDelegate> _delegate;	// 8 = 0x8
}
@property(assign) __weak id<RUIYTDocumentLoaderDelegate> delegate;	// G=0x259e19; S=0x259e39; @synthesize=_delegate
- (id)init;	// 0x2599f5
- (void).cxx_destruct;	// 0x259e4d
- (void)_finalizeDocument:(id)document;	// 0x259d69
- (void)cancelAllDocuments;	// 0x259c81
- (void)cancelDocument:(id)document;	// 0x259c1d
- (void)dealloc;	// 0x259a6d
// declared property getter: - (id)delegate;	// 0x259e19
- (void)loadDocument:(id)document;	// 0x259b01
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x259e39
@end

