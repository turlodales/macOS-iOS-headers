//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, _PASArgParser;

@interface _PASArgToplevelHandlerParams : NSObject
{
    _PASArgParser *_parser;
    NSDictionary *_options;
    NSArray *_positionalArguments;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *positionalArguments; // @synthesize positionalArguments=_positionalArguments;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) _PASArgParser *parser; // @synthesize parser=_parser;
- (id)initWithParser:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3;

@end

