//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceDefinition.h>

@interface NULivePhotoSourceDefinition : NUSourceDefinition
{
    NUSourceDefinition *_image;
    NUSourceDefinition *_video;
}

- (void).cxx_destruct;
@property(readonly) NUSourceDefinition *video; // @synthesize video=_video;
@property(readonly) NUSourceDefinition *image; // @synthesize image=_image;
- (id)description;
- (long long)mediaType;
- (id)initWithImageSourceDefinition:(id)arg1 videoSourceDefinition:(id)arg2;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end

