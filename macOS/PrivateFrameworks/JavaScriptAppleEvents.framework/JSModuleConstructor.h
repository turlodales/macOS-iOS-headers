//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JSModuleConstructorExport.h"

@class JSContext, NSMutableDictionary;

@interface JSModuleConstructor : NSObject <JSModuleConstructorExport>
{
    JSContext *_context;
    NSMutableDictionary *_modules;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *modules; // @synthesize modules=_modules;
@property __weak JSContext *context; // @synthesize context=_context;
- (id)require:(id)arg1;
- (id)evaluateMainModuleScript:(id)arg1;
- (id)requireModule:(id)arg1;
- (id)moduleForIdentifier:(id)arg1;
- (void)addModule:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

