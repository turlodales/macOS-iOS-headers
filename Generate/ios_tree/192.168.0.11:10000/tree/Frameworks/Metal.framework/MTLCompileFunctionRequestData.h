/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompileFunctionRequestData : NSObject {
    NSArray * _binaryArchives;
    <MTLBinaryArchive> * _destinationBinaryArchive;
    NSObject<OS_dispatch_data> * _driverKeyData;
    NSObject<OS_dispatch_data> * _frameworkData;
    MTLFunction * _function;
    <MTLPipelineCache> * _pipelineCache;
    unsigned long long  _pipelineOptions;
    NSArray * _privateVisibleFunctions;
    bool  _sync;
    NSDictionary * _visibleFunctionGroups;
    NSArray * _visibleFunctions;
}

@property (nonatomic, copy) NSArray *binaryArchives;
@property (nonatomic, retain) <MTLBinaryArchive> *destinationBinaryArchive;
@property (nonatomic) NSObject<OS_dispatch_data> *driverKeyData;
@property (nonatomic) NSObject<OS_dispatch_data> *frameworkData;
@property (nonatomic, retain) MTLFunction *function;
@property (nonatomic, retain) <MTLPipelineCache> *pipelineCache;
@property (nonatomic) unsigned long long pipelineOptions;
@property (nonatomic, copy) NSArray *privateVisibleFunctions;
@property (nonatomic) bool sync;
@property (nonatomic, copy) NSDictionary *visibleFunctionGroups;
@property (nonatomic, copy) NSArray *visibleFunctions;

- (id)binaryArchives;
- (void)dealloc;
- (id)destinationBinaryArchive;
- (id)driverKeyData;
- (id)frameworkData;
- (id)function;
- (id)pipelineCache;
- (unsigned long long)pipelineOptions;
- (id)privateVisibleFunctions;
- (void)setBinaryArchives:(id)arg1;
- (void)setDestinationBinaryArchive:(id)arg1;
- (void)setDriverKeyData:(id)arg1;
- (void)setFrameworkData:(id)arg1;
- (void)setFunction:(id)arg1;
- (void)setPipelineCache:(id)arg1;
- (void)setPipelineOptions:(unsigned long long)arg1;
- (void)setPrivateVisibleFunctions:(id)arg1;
- (void)setSync:(bool)arg1;
- (void)setVisibleFunctionGroups:(id)arg1;
- (void)setVisibleFunctions:(id)arg1;
- (bool)sync;
- (id)visibleFunctionGroups;
- (id)visibleFunctions;

@end
