//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDraggingInfo.h"

@class NSImage, NSPasteboard, NSString, NSWindow;

@interface ASKDragInfo : NSObject <NSDraggingInfo>
{
    id _sender;
}

+ (id)dragInfoWithSender:(id)arg1;
- (id)objectSpecifier;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
@property(readonly) long long draggingSequenceNumber;
@property(readonly) id draggingSource;
@property(readonly) NSPasteboard *draggingPasteboard;
@property(readonly) NSImage *draggedImage;
@property(readonly) struct CGPoint draggedImageLocation;
@property(readonly) struct CGPoint draggingLocation;
@property(readonly) unsigned long long draggingSourceOperationMask;
@property(readonly) NSWindow *draggingDestinationWindow;
- (void)setSender:(id)arg1;
- (id)sender;
- (void)dealloc;
- (id)initWithSender:(id)arg1;
- (id)init;

// Remaining properties
@property BOOL animatesToDestination;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property long long draggingFormation;
@property(readonly) unsigned long long hash;
@property long long numberOfValidItemsForDrop;
@property(readonly) long long springLoadingHighlight;
@property(readonly) Class superclass;

@end

