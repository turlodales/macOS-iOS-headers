//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWifiTrigger : WFTrigger
{
    NSArray *_selectedNetworks;
    unsigned long long _selection;
}

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selection; // @synthesize selection=_selection;
@property(retain, nonatomic) NSArray *selectedNetworks; // @synthesize selectedNetworks=_selectedNetworks;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (BOOL)hasValidConfiguration;
- (id)init;

@end

