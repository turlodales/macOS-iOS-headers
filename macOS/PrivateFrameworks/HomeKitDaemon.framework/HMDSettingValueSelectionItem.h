//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface HMDSettingValueSelectionItem : NSObject
{
    NSUUID *_identifier;
    NSString *_selection;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *selection; // @synthesize selection=_selection;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 selection:(id)arg2;

@end

