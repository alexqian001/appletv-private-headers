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
@property(assign) __weak id<RUIYTDocumentLoaderDelegate> delegate;	// G=0x25eb5d; S=0x25eb7d; @synthesize=_delegate
- (id)init;	// 0x25e749
- (void).cxx_destruct;	// 0x25eb91
- (void)_finalizeDocument:(id)document;	// 0x25eaad
- (void)cancelAllDocuments;	// 0x25e9c5
- (void)cancelDocument:(id)document;	// 0x25e961
- (void)dealloc;	// 0x25e7b5
// declared property getter: - (id)delegate;	// 0x25eb5d
- (void)loadDocument:(id)document;	// 0x25e849
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x25eb7d
@end
