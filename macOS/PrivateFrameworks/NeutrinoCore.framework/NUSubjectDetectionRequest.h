//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@interface NUSubjectDetectionRequest : NURenderRequest
{
    id <NUScalePolicy> _scalePolicy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
- (id)submitGenericSynchronous:(out id *)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

@end

