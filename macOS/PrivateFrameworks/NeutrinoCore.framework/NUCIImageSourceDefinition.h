//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class CIImage;

@interface NUCIImageSourceDefinition : NUSingleSourceDefinition
{
    CIImage *_image;
    long long _orientation;
}

- (void).cxx_destruct;
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(readonly) CIImage *image; // @synthesize image=_image;
- (long long)mediaType;
- (id)initWithCIImage:(id)arg1 orientation:(long long)arg2;
- (id)init;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end

