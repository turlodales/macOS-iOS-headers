//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRGetVolumeResultMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) float volume;
- (id)initWithVolume:(float)arg1;

@end

