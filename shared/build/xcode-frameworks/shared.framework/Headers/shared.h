#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedLink, SharedRuntimeQuery<__covariant RowType>, SharedAddLinkStoreAsyncState<__covariant T>, SharedKotlinNothing, SharedAddLinkStoreAsyncStateSuccess<T>, SharedAddLinkStoreIntent, SharedAddLinkStoreLabel, SharedAddLinkStoreState, SharedPoketRepository, SharedKoin_coreKoinApplication, SharedDatabaseDriverFactory, SharedKoin_coreKoin, SharedReaktiveSingleWrapper<__covariant T>, SharedKoin_coreLogger, SharedKoin_coreModule, SharedKotlinArray<T>, SharedKoin_coreLevel, SharedRuntimeTransacterTransaction, SharedKoin_coreDefinitionParameters, SharedKoin_coreScope, SharedKoin_corePropertyRegistry, SharedKoin_coreScopeRegistry, SharedKotlinThrowable, SharedKotlinByteArray, SharedKoin_coreBeanDefinition<T>, SharedKoin_coreOptions, SharedKoin_coreScopeDSL, SharedKoin_coreScopeDefinition, SharedKotlinEnum<E>, SharedKoin_coreInstanceRegistry, SharedKotlinByteIterator, SharedKoin_coreKind, SharedKoin_coreProperties, SharedKoin_coreCallbacks<T>, SharedKoin_coreInstanceFactory<T>, SharedKoin_coreInstanceContext;

@protocol SharedRuntimeTransactionWithoutReturn, SharedRuntimeTransactionWithReturn, SharedRuntimeTransacter, SharedRxDisposable, SharedRxObserver, SharedMvikotlinStore, SharedMvikotlinStoreFactory, SharedAddLinkStore, SharedRuntimeSqlDriver, SharedPoketDatabaseQueries, SharedPoketDatabase, SharedRuntimeSqlDriverSchema, SharedKoin_coreKoinComponent, SharedReaktiveSingle, SharedRuntimeSqlCursor, SharedRuntimeQueryListener, SharedRuntimeTransactionCallbacks, SharedMvikotlinBootstrapper, SharedMvikotlinExecutor, SharedMvikotlinReducer, SharedRuntimeSqlPreparedStatement, SharedRuntimeCloseable, SharedKotlinKClass, SharedKoin_coreQualifier, SharedKotlinLazy, SharedReaktiveObserver, SharedReaktiveSource, SharedReaktiveDisposable, SharedReaktiveSingleObserver, SharedMvikotlinExecutorCallbacks, SharedKotlinIterator, SharedKotlinComparable, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKoin_coreScopeCallback, SharedReaktiveSuccessCallback, SharedReaktiveErrorCallback, SharedReaktiveSingleCallbacks;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link")))
@interface SharedLink : SharedBase
- (instancetype)initWithUrl:(NSString *)url id:(int64_t)id displayName:(NSString *)displayName __attribute__((swift_name("init(url:id:displayName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedLink *)doCopyUrl:(NSString *)url id:(int64_t)id displayName:(NSString *)displayName __attribute__((swift_name("doCopy(url:id:displayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol SharedRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("PoketDatabaseQueries")))
@protocol SharedPoketDatabaseQueries <SharedRuntimeTransacter>
@required
- (void)insertLinkUrl:(NSString *)url displayName:(NSString *)displayName __attribute__((swift_name("insertLink(url:displayName:)")));
- (void)removeAllLinks __attribute__((swift_name("removeAllLinks()")));
- (SharedRuntimeQuery<SharedLink *> *)selectAllLinks __attribute__((swift_name("selectAllLinks()")));
- (SharedRuntimeQuery<id> *)selectAllLinksMapper:(id (^)(NSString *, SharedLong *, NSString *))mapper __attribute__((swift_name("selectAllLinks(mapper:)")));
- (SharedRuntimeQuery<SharedLink *> *)selectLinkByIdId:(int64_t)id __attribute__((swift_name("selectLinkById(id:)")));
- (SharedRuntimeQuery<id> *)selectLinkByIdId:(int64_t)id mapper:(id (^)(NSString *, SharedLong *, NSString *))mapper __attribute__((swift_name("selectLinkById(id:mapper:)")));
@end;

__attribute__((swift_name("MvikotlinStore")))
@protocol SharedMvikotlinStore
@required
- (void)acceptIntent:(id)intent __attribute__((swift_name("accept(intent:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (id<SharedRxDisposable>)labelsObserver:(id<SharedRxObserver>)observer __attribute__((swift_name("labels(observer:)")));
- (id<SharedRxDisposable>)statesObserver:(id<SharedRxObserver>)observer __attribute__((swift_name("states(observer:)")));
@property (readonly) BOOL isDisposed __attribute__((swift_name("isDisposed")));
@property (readonly) id state __attribute__((swift_name("state")));
@end;

__attribute__((swift_name("AddLinkStore")))
@protocol SharedAddLinkStore <SharedMvikotlinStore>
@required
@end;

__attribute__((swift_name("AddLinkStoreAsyncState")))
@interface SharedAddLinkStoreAsyncState<__covariant T> : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddLinkStoreAsyncStateLoading")))
@interface SharedAddLinkStoreAsyncStateLoading : SharedAddLinkStoreAsyncState<SharedKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddLinkStoreAsyncStateSuccess")))
@interface SharedAddLinkStoreAsyncStateSuccess<T> : SharedAddLinkStoreAsyncState<T>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedAddLinkStoreAsyncStateSuccess<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("AddLinkStoreIntent")))
@interface SharedAddLinkStoreIntent : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddLinkStoreIntent.AddLink")))
@interface SharedAddLinkStoreIntentAddLink : SharedAddLinkStoreIntent
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("AddLinkStoreLabel")))
@interface SharedAddLinkStoreLabel : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddLinkStoreLabel.ShowToast")))
@interface SharedAddLinkStoreLabelShowToast : SharedAddLinkStoreLabel
- (instancetype)initWithText:(NSString *)text __attribute__((swift_name("init(text:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddLinkStoreState")))
@interface SharedAddLinkStoreState : SharedBase
- (instancetype)initWithLink:(SharedAddLinkStoreAsyncState<SharedLink *> *)link __attribute__((swift_name("init(link:)"))) __attribute__((objc_designated_initializer));
- (SharedAddLinkStoreAsyncState<SharedLink *> *)component1 __attribute__((swift_name("component1()")));
- (SharedAddLinkStoreState *)doCopyLink:(SharedAddLinkStoreAsyncState<SharedLink *> *)link __attribute__((swift_name("doCopy(link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAddLinkStoreAsyncState<SharedLink *> *link __attribute__((swift_name("link")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddLinkStoreFactory")))
@interface SharedAddLinkStoreFactory : SharedBase
- (instancetype)initWithStoreFactory:(id<SharedMvikotlinStoreFactory>)storeFactory poketRepository:(SharedPoketRepository *)poketRepository __attribute__((swift_name("init(storeFactory:poketRepository:)"))) __attribute__((objc_designated_initializer));
- (id<SharedAddLinkStore>)create __attribute__((swift_name("create()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SharedPlatform : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedComponent")))
@interface SharedSharedComponent : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedComponent __attribute__((swift_name("init()")));
- (SharedKoin_coreKoinApplication *)doInitDependenciesDatabaseDriverFactory:(SharedDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("doInitDependencies(databaseDriverFactory:)")));
- (SharedKoin_coreKoinApplication *)doInitDependenciesDatabaseDriverFactory:(SharedDatabaseDriverFactory *)databaseDriverFactory appDeclaration:(void (^)(SharedKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitDependencies(databaseDriverFactory:appDeclaration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface SharedDatabaseDriverFactory : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((swift_name("PoketDatabase")))
@protocol SharedPoketDatabase <SharedRuntimeTransacter>
@required
@property (readonly) id<SharedPoketDatabaseQueries> poketDatabaseQueries __attribute__((swift_name("poketDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PoketDatabaseCompanion")))
@interface SharedPoketDatabaseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedPoketDatabase>)invokeDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<SharedRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol SharedKoin_coreKoinComponent
@required
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PoketRepository")))
@interface SharedPoketRepository : SharedBase <SharedKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedReaktiveSingleWrapper<NSArray<SharedLink *> *> *)getAllLinks __attribute__((swift_name("getAllLinks()")));
- (SharedReaktiveSingleWrapper<SharedLink *> *)getLinkByIdId:(int64_t)id __attribute__((swift_name("getLinkById(id:)")));
- (id<SharedReaktiveSingle>)insertLinkLink:(SharedLink *)link __attribute__((swift_name("insertLink(link:)")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface SharedRuntimeQuery<__covariant RowType> : SharedBase
- (instancetype)initWithQueries:(NSMutableArray<SharedRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<SharedRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<SharedRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<SharedRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol SharedRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol SharedRuntimeTransactionWithoutReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol SharedRuntimeTransactionWithReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RxDisposable")))
@protocol SharedRxDisposable
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@property (readonly) BOOL isDisposed __attribute__((swift_name("isDisposed")));
@end;

__attribute__((swift_name("RxObserver")))
@protocol SharedRxObserver
@required
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onNextValue:(id _Nullable)value __attribute__((swift_name("onNext(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((swift_name("MvikotlinStoreFactory")))
@protocol SharedMvikotlinStoreFactory
@required
- (id<SharedMvikotlinStore>)createName:(NSString * _Nullable)name initialState:(id)initialState bootstrapper:(id<SharedMvikotlinBootstrapper> _Nullable)bootstrapper executorFactory:(id<SharedMvikotlinExecutor> (^)(void))executorFactory reducer:(id<SharedMvikotlinReducer>)reducer __attribute__((swift_name("create(name:initialState:bootstrapper:executorFactory:reducer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface SharedKoin_coreKoinApplication : SharedBase
- (void)close __attribute__((swift_name("close()")));
- (SharedKoin_coreKoinApplication *)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoin_coreKoinApplication *)loggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (SharedKoin_coreKoinApplication *)modulesModules:(SharedKotlinArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (SharedKoin_coreKoinApplication *)modulesModules_:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (SharedKoin_coreKoinApplication *)modulesModules__:(SharedKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (SharedKoin_coreKoinApplication *)printLoggerLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (SharedKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(SharedKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) SharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol SharedRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol SharedRuntimeSqlDriver <SharedRuntimeCloseable>
@required
- (SharedRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<SharedRuntimeSqlCursor>)executeQueryIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (SharedRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol SharedRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<SharedRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface SharedKoin_coreKoin : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)bindPrimaryType:(id<SharedKotlinKClass>)primaryType secondaryType:(id<SharedKotlinKClass>)secondaryType parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createRootScope __attribute__((swift_name("createRootScope()")));
- (SharedKoin_coreScope *)createScope __attribute__((swift_name("createScope()")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id _Nullable)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key defaultValue:(id _Nullable)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (SharedKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (SharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:parameters:)")));
- (void)loadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("loadModules(modules:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (BOOL)unloadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property SharedKoin_coreLogger *_logger __attribute__((swift_name("_logger")));
@property (readonly) SharedMutableSet<SharedKoin_coreModule *> *_modules __attribute__((swift_name("_modules")));
@property (readonly) SharedKoin_corePropertyRegistry *_propertyRegistry __attribute__((swift_name("_propertyRegistry")));
@property (readonly) SharedKoin_coreScopeRegistry *_scopeRegistry __attribute__((swift_name("_scopeRegistry")));
@end;

__attribute__((swift_name("ReaktiveSource")))
@protocol SharedReaktiveSource
@required
- (void)subscribeObserver:(id<SharedReaktiveObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@end;

__attribute__((swift_name("ReaktiveSingle")))
@protocol SharedReaktiveSingle <SharedReaktiveSource>
@required
@end;

__attribute__((swift_name("ReaktiveSingleWrapper")))
@interface SharedReaktiveSingleWrapper<__covariant T> : SharedBase <SharedReaktiveSingle>
- (instancetype)initWithInner:(id<SharedReaktiveSingle>)inner __attribute__((swift_name("init(inner:)"))) __attribute__((objc_designated_initializer));
- (id<SharedReaktiveDisposable>)subscribe __attribute__((swift_name("subscribe()")));
- (void)subscribeObserver:(id<SharedReaktiveSingleObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
- (id<SharedReaktiveDisposable>)subscribeIsThreadLocal:(BOOL)isThreadLocal onSubscribe:(void (^ _Nullable)(id<SharedReaktiveDisposable>))onSubscribe onError:(void (^ _Nullable)(SharedKotlinThrowable *))onError onSuccess:(void (^ _Nullable)(T))onSuccess __attribute__((swift_name("subscribe(isThreadLocal:onSubscribe:onError:onSuccess:)")));
- (id<SharedReaktiveDisposable>)subscribeIsThreadLocal:(BOOL)isThreadLocal onSuccess:(void (^)(T))onSuccess __attribute__((swift_name("subscribe(isThreadLocal:onSuccess:)")));
- (id<SharedReaktiveDisposable>)subscribeIsThreadLocal:(BOOL)isThreadLocal onError:(void (^)(SharedKotlinThrowable *))onError onSuccess:(void (^)(T))onSuccess __attribute__((swift_name("subscribe(isThreadLocal:onError:onSuccess:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol SharedRuntimeSqlCursor <SharedRuntimeCloseable>
@required
- (SharedKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (SharedDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (SharedLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol SharedRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("MvikotlinBootstrapper")))
@protocol SharedMvikotlinBootstrapper
@required
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)doInitActionConsumer:(void (^)(id))actionConsumer __attribute__((swift_name("doInit(actionConsumer:)")));
- (void)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((swift_name("MvikotlinExecutor")))
@protocol SharedMvikotlinExecutor
@required
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)handleActionAction:(id)action __attribute__((swift_name("handleAction(action:)")));
- (void)handleIntentIntent:(id)intent __attribute__((swift_name("handleIntent(intent:)")));
- (void)doInitCallbacks:(id<SharedMvikotlinExecutorCallbacks>)callbacks __attribute__((swift_name("doInit(callbacks:)")));
@end;

__attribute__((swift_name("MvikotlinReducer")))
@protocol SharedMvikotlinReducer
@required
- (id _Nullable)reduce:(id _Nullable)receiver result:(id _Nullable)result __attribute__((swift_name("reduce(_:result:)")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface SharedKoin_coreLogger : SharedBase
- (instancetype)initWithLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(SharedKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLevel:(SharedKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property SharedKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface SharedKoin_coreModule : SharedBase
- (instancetype)initWithCreateAtStart:(BOOL)createAtStart override:(BOOL)override __attribute__((swift_name("init(createAtStart:override:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreBeanDefinition<id> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:definition:)")));
- (SharedKoin_coreOptions *)makeOptionsOverride:(BOOL)override createdAtStart:(BOOL)createdAtStart __attribute__((swift_name("makeOptions(override:createdAtStart:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModule:(SharedKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<SharedKoin_coreQualifier>)qualifier scopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (SharedKoin_coreBeanDefinition<id> *)singleQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:createdAtStart:override:definition:)")));
@property (readonly) BOOL createAtStart __attribute__((swift_name("createAtStart")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) NSMutableArray<SharedKoin_coreScopeDefinition *> *otherScopes __attribute__((swift_name("otherScopes")));
@property (readonly) BOOL override __attribute__((swift_name("override")));
@property (readonly) SharedKoin_coreScopeDefinition *rootScope __attribute__((swift_name("rootScope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface SharedKoin_coreLevel : SharedKotlinEnum<SharedKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedKoin_coreLevel *none __attribute__((swift_name("none")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface SharedRuntimeTransacterTransaction : SharedBase <SharedRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) SharedRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol SharedRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index value:(SharedKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(index:value:)")));
- (void)bindDoubleIndex:(int32_t)index value:(SharedDouble * _Nullable)value __attribute__((swift_name("bindDouble(index:value:)")));
- (void)bindLongIndex:(int32_t)index value:(SharedLong * _Nullable)value __attribute__((swift_name("bindLong(index:value:)")));
- (void)bindStringIndex:(int32_t)index value:(NSString * _Nullable)value __attribute__((swift_name("bindString(index:value:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreDefinitionParameters")))
@interface SharedKoin_coreDefinitionParameters : SharedBase
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) SharedKotlinArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface SharedKoin_coreScope : SharedBase
- (instancetype)initWithId:(NSString *)id _scopeDefinition:(SharedKoin_coreScopeDefinition *)_scopeDefinition _koin:(SharedKoin_coreKoin *)_koin _source:(id _Nullable)_source __attribute__((swift_name("init(id:_scopeDefinition:_koin:_source:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)bindPrimaryType:(id<SharedKotlinKClass>)primaryType secondaryType:(id<SharedKotlinKClass>)secondaryType parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(primaryType:secondaryType:parameters:)")));
- (id _Nullable)bindParameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("bind(parameters:)")));
- (void)close __attribute__((swift_name("close()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedKoin_coreScopeDefinition *)component2 __attribute__((swift_name("component2()")));
- (SharedKoin_coreKoin *)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedKoin_coreScope *)doCopyId:(NSString *)id _scopeDefinition:(SharedKoin_coreScopeDefinition *)_scopeDefinition _koin:(SharedKoin_coreKoin *)_koin _source:(id _Nullable)_source __attribute__((swift_name("doCopy(id:_scopeDefinition:_koin:_source:)")));
- (void)declareInstance:(id)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:override:)")));
- (void)dropInstancesScopeDefinition:(SharedKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("dropInstances(scopeDefinition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id _Nullable)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key defaultValue:(id _Nullable)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (SharedKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id)getSource __attribute__((swift_name("getSource()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:parameters:)")));
- (void)linkToScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)loadDefinitionsScopeDefinition:(SharedKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("loadDefinitions(scopeDefinition:)")));
- (void)registerCallbackCallback:(id<SharedKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (id _Nullable)resolveInstanceQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier clazz:(id<SharedKotlinKClass>)clazz parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))parameters __attribute__((swift_name("resolveInstance(qualifier:clazz:parameters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<id<SharedKoin_coreScopeCallback>> *_callbacks __attribute__((swift_name("_callbacks")));
@property BOOL _closed __attribute__((swift_name("_closed")));
@property (readonly) SharedKoin_coreInstanceRegistry *_instanceRegistry __attribute__((swift_name("_instanceRegistry")));
@property (readonly) SharedKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSMutableArray<SharedKoin_coreScope *> *_linkedScope __attribute__((swift_name("_linkedScope")));
@property (readonly) SharedKoin_coreScopeDefinition *_scopeDefinition __attribute__((swift_name("_scopeDefinition")));
@property (readonly) id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol SharedKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface SharedKoin_corePropertyRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@property (readonly) SharedKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface SharedKoin_coreScopeRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)deleteScopeScope:(SharedKoin_coreScope *)scope __attribute__((swift_name("deleteScope(scope:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (SharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (void)unloadModulesModules:(id)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(SharedKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property SharedKoin_coreScope * _Nullable _rootScope __attribute__((swift_name("_rootScope")));
@property SharedKoin_coreScopeDefinition * _Nullable _rootScopeDefinition __attribute__((swift_name("_rootScopeDefinition")));
@property (readonly) SharedKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSDictionary<NSString *, SharedKoin_coreScopeDefinition *> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@property (readonly) NSDictionary<NSString *, SharedKoin_coreScope *> *scopes __attribute__((swift_name("scopes")));
@end;

__attribute__((swift_name("ReaktiveObserver")))
@protocol SharedReaktiveObserver
@required
- (void)onSubscribeDisposable:(id<SharedReaktiveDisposable>)disposable __attribute__((swift_name("onSubscribe(disposable:)")));
@end;

__attribute__((swift_name("ReaktiveDisposable")))
@protocol SharedReaktiveDisposable
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@property (readonly) BOOL isDisposed __attribute__((swift_name("isDisposed")));
@end;

__attribute__((swift_name("ReaktiveSuccessCallback")))
@protocol SharedReaktiveSuccessCallback
@required
- (void)onSuccessValue:(id _Nullable)value __attribute__((swift_name("onSuccess(value:)")));
@end;

__attribute__((swift_name("ReaktiveErrorCallback")))
@protocol SharedReaktiveErrorCallback
@required
- (void)onErrorError:(SharedKotlinThrowable *)error __attribute__((swift_name("onError(error:)")));
@end;

__attribute__((swift_name("ReaktiveSingleCallbacks")))
@protocol SharedReaktiveSingleCallbacks <SharedReaktiveSuccessCallback, SharedReaktiveErrorCallback>
@required
@end;

__attribute__((swift_name("ReaktiveSingleObserver")))
@protocol SharedReaktiveSingleObserver <SharedReaktiveObserver, SharedReaktiveSingleCallbacks>
@required
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("MvikotlinExecutorCallbacks")))
@protocol SharedMvikotlinExecutorCallbacks
@required
- (void)onLabelLabel:(id _Nullable)label __attribute__((swift_name("onLabel(label:)")));
- (void)onResultResult:(id _Nullable)result __attribute__((swift_name("onResult(result:)")));
@property (readonly) id _Nullable state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface SharedKoin_coreBeanDefinition<T> : SharedBase
- (instancetype)initWithScopeDefinition:(SharedKoin_coreScopeDefinition *)scopeDefinition primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes options:(SharedKoin_coreOptions *)options properties:(SharedKoin_coreProperties *)properties callbacks:(SharedKoin_coreCallbacks<T> *)callbacks __attribute__((swift_name("init(scopeDefinition:primaryType:qualifier:definition:kind:secondaryTypes:options:properties:callbacks:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canBindPrimary:(id<SharedKotlinKClass>)primary secondary:(id<SharedKotlinKClass>)secondary __attribute__((swift_name("canBind(primary:secondary:)")));
- (SharedKoin_coreScopeDefinition *)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<SharedKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))component4 __attribute__((swift_name("component4()")));
- (SharedKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<SharedKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (SharedKoin_coreOptions *)component7 __attribute__((swift_name("component7()")));
- (SharedKoin_coreProperties *)component8 __attribute__((swift_name("component8()")));
- (SharedKoin_coreCallbacks<T> *)component9 __attribute__((swift_name("component9()")));
- (SharedKoin_coreBeanDefinition<T> *)doCopyScopeDefinition:(SharedKoin_coreScopeDefinition *)scopeDefinition primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes options:(SharedKoin_coreOptions *)options properties:(SharedKoin_coreProperties *)properties callbacks:(SharedKoin_coreCallbacks<T> *)callbacks __attribute__((swift_name("doCopy(scopeDefinition:primaryType:qualifier:definition:kind:secondaryTypes:options:properties:callbacks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(SharedKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *) __attribute__((swift_name("definition")));
@property (readonly) SharedKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) SharedKoin_coreOptions *options __attribute__((swift_name("options")));
@property (readonly) id<SharedKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) SharedKoin_coreProperties *properties __attribute__((swift_name("properties")));
@property (readonly) id<SharedKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) SharedKoin_coreScopeDefinition *scopeDefinition __attribute__((swift_name("scopeDefinition")));
@property (readonly) NSArray<id<SharedKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreOptions")))
@interface SharedKoin_coreOptions : SharedBase
- (instancetype)initWithIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override __attribute__((swift_name("init(isCreatedAtStart:override:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedKoin_coreOptions *)doCopyIsCreatedAtStart:(BOOL)isCreatedAtStart override:(BOOL)override __attribute__((swift_name("doCopy(isCreatedAtStart:override:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isCreatedAtStart __attribute__((swift_name("isCreatedAtStart")));
@property BOOL override __attribute__((swift_name("override")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface SharedKoin_coreScopeDSL : SharedBase
- (instancetype)initWithScopeDefinition:(SharedKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("init(scopeDefinition:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreBeanDefinition<id> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("factory(qualifier:override:definition:)")));
- (SharedKoin_coreBeanDefinition<id> *)scopedQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("scoped(qualifier:override:definition:)")));
- (SharedKoin_coreBeanDefinition<id> *)singleQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier override:(BOOL)override definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreDefinitionParameters *))definition __attribute__((swift_name("single(qualifier:override:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) SharedKoin_coreScopeDefinition *scopeDefinition __attribute__((swift_name("scopeDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDefinition")))
@interface SharedKoin_coreScopeDefinition : SharedBase
- (instancetype)initWithQualifier:(id<SharedKoin_coreQualifier>)qualifier isRoot:(BOOL)isRoot _definitions:(SharedMutableSet<SharedKoin_coreBeanDefinition<id> *> *)_definitions __attribute__((swift_name("init(qualifier:isRoot:_definitions:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreScopeDefinition *)doCopy __attribute__((swift_name("doCopy()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)removeBeanDefinition:(SharedKoin_coreBeanDefinition<id> *)beanDefinition __attribute__((swift_name("remove(beanDefinition:)")));
- (void)saveBeanDefinition:(SharedKoin_coreBeanDefinition<id> *)beanDefinition forceOverride:(BOOL)forceOverride __attribute__((swift_name("save(beanDefinition:forceOverride:)")));
- (SharedKoin_coreBeanDefinition<id> *)saveNewDefinitionInstance:(id)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> * _Nullable)secondaryTypes override:(BOOL)override __attribute__((swift_name("saveNewDefinition(instance:qualifier:secondaryTypes:override:)")));
- (void)unloadDefinitionsScopeDefinition:(SharedKoin_coreScopeDefinition *)scopeDefinition __attribute__((swift_name("unloadDefinitions(scopeDefinition:)")));
@property (readonly) NSSet<SharedKoin_coreBeanDefinition<id> *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) id<SharedKoin_coreQualifier> qualifier __attribute__((swift_name("qualifier")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol SharedKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(SharedKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface SharedKoin_coreInstanceRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin _scope:(SharedKoin_coreScope *)_scope __attribute__((swift_name("init(_koin:_scope:)"))) __attribute__((objc_designated_initializer));
- (void)saveDefinitionDefinition:(SharedKoin_coreBeanDefinition<id> *)definition override:(BOOL)override __attribute__((swift_name("saveDefinition(definition:override:)")));
@property (readonly) SharedKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) SharedKoin_coreScope *_scope __attribute__((swift_name("_scope")));
@property (readonly) NSDictionary<NSString *, SharedKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface SharedKoin_coreKind : SharedKotlinEnum<SharedKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKoin_coreKind *single __attribute__((swift_name("single")));
@property (class, readonly) SharedKoin_coreKind *factory __attribute__((swift_name("factory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreProperties")))
@interface SharedKoin_coreProperties : SharedBase
- (instancetype)initWithData:(SharedMutableDictionary<NSString *, id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreProperties *)doCopyData:(SharedMutableDictionary<NSString *, id> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (id _Nullable)getOrNullKey:(NSString *)key __attribute__((swift_name("getOrNull(key:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("set(key:value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface SharedKoin_coreCallbacks<T> : SharedBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (SharedKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface SharedKoin_coreInstanceFactory<T> : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin beanDefinition:(SharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(_koin:beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)drop __attribute__((swift_name("drop()")));
- (T _Nullable)getContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreated __attribute__((swift_name("isCreated()")));
@property (readonly) SharedKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface SharedKoin_coreInstanceContext : SharedBase
- (instancetype)initWithKoin:(SharedKoin_coreKoin *)koin scope:(SharedKoin_coreScope *)scope _parameters:(SharedKoin_coreDefinitionParameters *(^ _Nullable)(void))_parameters __attribute__((swift_name("init(koin:scope:_parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) SharedKoin_coreDefinitionParameters *parameters __attribute__((swift_name("parameters")));
@property (readonly) SharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
