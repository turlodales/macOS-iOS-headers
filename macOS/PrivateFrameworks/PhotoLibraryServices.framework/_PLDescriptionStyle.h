//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _PLDescriptionStyle : NSObject
{
    BOOL _prettyPrint;
    NSString *_initialFieldSeparator;
    NSString *_fieldSeparator;
    NSString *_nameValueSeparator;
    NSString *_suffix;
    long long _extraIndent;
}

+ (id)styleForEnum:(long long)arg1;
- (void).cxx_destruct;
@property(readonly) BOOL prettyPrint; // @synthesize prettyPrint=_prettyPrint;
@property(readonly) long long extraIndent; // @synthesize extraIndent=_extraIndent;
@property(readonly, copy) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, copy) NSString *nameValueSeparator; // @synthesize nameValueSeparator=_nameValueSeparator;
@property(readonly, copy) NSString *fieldSeparator; // @synthesize fieldSeparator=_fieldSeparator;
@property(readonly, copy) NSString *initialFieldSeparator; // @synthesize initialFieldSeparator=_initialFieldSeparator;
- (id)descriptionForObject:(id)arg1 withIndent:(long long)arg2;
- (id)initWithIntialFieldSeparator:(id)arg1 fieldSeparator:(id)arg2 nameValueSeparator:(id)arg3 suffix:(id)arg4 extraIndent:(long long)arg5 prettyPrint:(BOOL)arg6;

@end

