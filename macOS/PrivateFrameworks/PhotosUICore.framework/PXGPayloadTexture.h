//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGBaseTexture.h>

@interface PXGPayloadTexture : PXGBaseTexture
{
    int _presentationType;
    id <NSCopying> _payload;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <NSCopying> payload; // @synthesize payload=_payload;
- (BOOL)isOpaque;
@property(readonly, nonatomic) int presentationType;
- (struct CGSize)pixelSize;
- (struct CGImage *)imageRepresentation;
- (long long)estimatedByteSize;
- (id)init;
- (id)initWithPayload:(id)arg1 presentationType:(int)arg2;

@end

