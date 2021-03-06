//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSUUID;

@interface IFTopic : NSObject
{
    IFTopic *parent;
    NSArray *children;
    NSString *_name;
    NSString *_label;
    NSUUID *_identifier;
    double _score;
    NSArray *_indications;
    unsigned long long _activations;
    unsigned long long _indirectActivations;
}

+ (id)topicWithName:(id)arg1 label:(id)arg2 identifier:(id)arg3;
+ (id)root;
@property(nonatomic) unsigned long long indirectActivations; // @synthesize indirectActivations=_indirectActivations;
@property(nonatomic) unsigned long long activations; // @synthesize activations=_activations;
@property(retain, nonatomic) NSArray *indications; // @synthesize indications=_indications;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *children; // @synthesize children;
@property(retain, nonatomic) IFTopic *parent; // @synthesize parent;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long level;
@property(readonly, nonatomic) unsigned long long height;
@property(readonly, nonatomic) IFTopic *root;

@end

