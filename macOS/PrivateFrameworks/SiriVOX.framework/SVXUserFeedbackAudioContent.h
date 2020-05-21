//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSURL;

@interface SVXUserFeedbackAudioContent : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_itemURL;
    unsigned long long _numberOfLoops;
    double _fadeInDuration;
    double _fadeOutDuration;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(readonly, nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(readonly, nonatomic) unsigned long long numberOfLoops; // @synthesize numberOfLoops=_numberOfLoops;
@property(readonly, copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithItemURL:(id)arg1 numberOfLoops:(unsigned long long)arg2 fadeInDuration:(double)arg3 fadeOutDuration:(double)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

