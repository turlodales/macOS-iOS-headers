//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKVersionedDocument.h>

@class PKDrawing;

@interface PKDrawingVersionedDocument : PKVersionedDocument
{
    BOOL _loadNonInkingStrokes;
    PKDrawing *_drawing;
}

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
- (void).cxx_destruct;
@property(nonatomic) BOOL loadNonInkingStrokes; // @synthesize loadNonInkingStrokes=_loadNonInkingStrokes;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (BOOL)loadUnzippedData:(id)arg1;

@end

