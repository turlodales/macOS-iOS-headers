//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PIEImageRaster : NSObject
{
    CDStruct_a06f635e *_raster;
    struct CGSize _dimensions;
    struct CGContext *_rasterContext;
}

@property(readonly) CDStruct_a06f635e *raster; // @synthesize raster=_raster;
@property(readonly) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
- (void)dealloc;
- (CDStruct_a06f635e *)fastColorAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
@property(readonly) struct CGContext *rasterContext; // @synthesize rasterContext=_rasterContext;
- (struct CGImage *)createCGImage;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithDimensions:(struct CGSize)arg1;

@end

