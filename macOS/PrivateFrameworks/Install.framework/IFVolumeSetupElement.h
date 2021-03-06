//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

@class IFDiskObject;

@interface IFVolumeSetupElement : IFInstallQueueElement
{
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    BOOL _willInitializeTarget;
}

- (long long)run;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)initWithTargetVolume:(id)arg1 sourceVolume:(id)arg2 willInitializeTarget:(BOOL)arg3;

@end

