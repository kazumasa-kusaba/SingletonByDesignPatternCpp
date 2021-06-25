#ifndef SINGLETON_CLASS_H_
#define SINGLETON_CLASS_H_

class Singleton {
 public:
  ~Singleton();
  Singleton(const Singleton&) = delete;
  Singleton& operator=(const Singleton&) = delete;
  Singleton(Singleton&&) = delete;
  Singleton& operator=(Singleton&&) = delete;
  static Singleton* getInstance();
  void greet();

 private:
  Singleton() {};
  static Singleton* singleton;
};

#endif

